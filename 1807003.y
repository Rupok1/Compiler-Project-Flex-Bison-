%{
	#include<stdio.h>
	#include<math.h>
	
	typedef struct xy {
    	char *var;
    	int num;
	} save;
    save sv[1000],sm[1000];
	int cnt1=1,cnt2=1,val,cnt3=1,cnt4=0,case_no=0,default_case=0;
	float x,y;
	void insert_var (save *p, char *s, int n);
	void insert_var2 (save *p, char *s, int n);

	
%}

%union 
{
        int number;
        char *string;
}

%start code
%token <number> NUM
%token <string> VAR
%token <string> HEADER MAIN DEFINE CHAR INT FLOAT DOUBLE LONG IF ELSE ELSE_IF GOE LOE TWO_EQ NOT_EQ GT LT EQ LB RB LP RP END COL DASH COMA QT NOT OR AND PLUS MINUS MULT DIV MOD POW FACT INC DEC LOGICAL_OR LOGICAL_AND XOR VOID RETURN CASE BREAK CONTINUE SWITCH SCANF PRINTF DEFAULT FOR WHILE FUNC SIN COS TAN
%type <string> cstatement
%type <number> expression
%nonassoc IFX
%nonassoc ELIFX
%nonassoc ELSE
%left LOGICAL_OR
%left LOGICAL_AND
%left OR
%left XOR
%left AND 
%left TWO_EQ NOT_EQ
%left LT GT GOE LOE 
%left PLUS MINUS
%left MULT DIV MOD
%left FACT 
%left POW
%left NOT
%left INC DEC

%%
code:
    |HEADER {printf("Header files declaration \n");}
    |code statement

statement: MAIN LB main_code RETURN RB {printf("main declaration\n");}
         ;
main_code:
		 |s_declaration
		 |main_code cstatement
		 ;
s_declaration: TYPE ID1 END {printf("variable declared\n");}
			 ;
TYPE: INT
	| FLOAT
	| DOUBLE
	| CHAR
	| LONG
	;

ID1: ID1 COMA VAR {
						if(for_key($3))
						{
							printf("%s is already declared\n", $3 );
						}
						else
						{
							insert_var(&sv[cnt1],$3, cnt1);
							cnt1++;
							
						}
			}

    |VAR	{
				if(for_key($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					insert_var(&sv[cnt1],$1, cnt1);
							cnt1++;
				}
			}
     ;	

cstatement: END	
            				  
		    | expression END 	{printf("value of expression: %d\n",($1));}	
			
			| VAR EQ expression END {
								
										if(for_key($1)){
											
											int i = for_key2($1);
											if (!i){
												insert_var(&sm[cnt3], $1, $3);
												cnt3++;
											}
											sm[i].num = $3;
											printf("Assign %s = %d\t\n",$1,$3);
										}
										else {
											printf("%s not declared yet\n",$1);
										}
										
									}
			| IF LP expression RP LB expression END RB %prec IFX {
				                printf("Expression IF matched\n");
								if($3)
								{
									printf("value of expression in IF: %d\n",($6));
								}
								else
								{
									printf("condition value zero in IF block\n");
								}
							}

			| IF LP expression RP LB expression END RB ELSE LB expression END RB {
								 	printf("Expression IF_ELSE matched\n");
									if($3)
									{
										printf("value of expression in IF: %d\n",$6);
									}
									else
									{
										printf("value of expression in ELSE: %d\n",$11);
									}
								   }

			| IF LP expression RP LB IF LP expression RP LB expression END RB ELSE LB expression END RB expression END RB ELSE LB expression END RB %prec IFX {
								 	
									    printf("Expression nested IF_ELSE matched\n");
										if($3)
										{
											if($8)
												printf("value of expression middle IF: %d\n",$11);
											else
												printf("value of expression middle ELSE: %d\n",$16);
											printf("value of expression in first IF: %d\n",$19);
										}
										else
										{
											printf("value of expression in else: %d\n",$24);
										}
										
								   }

			| IF LP expression RP LB expression END RB ELSE_IF LP expression RP LB expression END RB ELSE LB expression END RB {
										printf("Expression IF_(ELSE_IF)_ELSE matched\n");
										if($3)
										{
											printf("value of expression in IF: %d\n",$6);
										}
										else if($11)
										{
											printf("value of expression in ELIF: %d\n",$14);
										}
										else
										{
											printf("value of expression in ELSE: %d\n",$19);
										}
								   }
			| FOR LP NUM COL NUM COL NUM INC RP LB expression END RB {
														printf("Loop increment matched\n");
													
													    int i = 0;
														for(i = $3; i<=$5; i += $7)
														{
															printf("%d ",i);
														}
														printf("\n");
														printf("value of the expression: %d\n",$11);
	 								                 }
			| FOR LP NUM COL NUM COL NUM DEC RP LB expression END RB {
														printf("Loop decrement matched\n");
													
													    int i = 0;
														for(i = $3; i>=$5; i -= $7)
														{
															printf("%d ",i);
														}
														printf("\n");
														printf("value of the expression: %d\n",$11);
	 								                 }

			| WHILE LP NUM LOE NUM COL expression INC RP LB expression END RB {
														
															int i = $3;
															printf("While LOOP: ");
															while(i <= $5)
															{
																printf("%d ",i);
																i = i + $7;
															}
															printf("\n");
															printf("value of the expression: %d\n",$11);

	                                                    }	

			| WHILE LP NUM LOE NUM COL expression DEC RP LB expression END RB {
														
															int i = $5;
															printf("While LOOP: ");
															while(i >= 1)
															{
																printf("%d ",i);
																i = i - $7;
															}
															printf("\n");
															printf("value of the expression: %d\n",$11);

	                                                    }	
			

			| FUNC define
			| SWITCH LP case RP LB code RB {printf("SWITCH case matched\n");}
			;
define: COL TYPE LP RP LB cstatement RB
									   {
										 printf("Function declared \n");
										 printf("value of expression: %d\n",$6);
									   }
case : 
	  expression
	  			{
					default_case = 0;
					case_no = $1;
				}
	  ;
code : code CASE NUM COL expression END BREAK END {
	                                if(case_no == $3)
									{
										printf("case block expression value: %d\n",$5);
										default_case = 1;
									}

                                  }
	  | code DEFAULT COL expression END BREAK END{
		                              if(default_case == 0)
									  {
										default_case = 1;
										printf("Default block expression value: %d\n",$4);
									  }

	  								} 
	  ;
			

expression: NUM 		{$$ = $1;}
		  
		  | VAR 		{ $$ = sm[for_key2($1)].num;}
		
	      | expression PLUS expression	{   $$ = $1 + $3; printf("Expression JOG matched\n");}
		 
		  | expression MINUS expression	{ $$ = $1 - $3; printf("Expression BIYOG matched\n");}
		  
		  | expression MULT expression	{ $$ = $1 * $3; printf("Expression GUN matched\n"); } 
		  
		  | expression DIV expression { 	    printf("Expression VAG matched\n");
												
												if($3) 
												{
														$$ = $1 / $3;
												}
												else
												{
													$$ = 0;
													printf("Invalid, division by zero\n");
												} 	
									  }

		  | expression MOD expression {
										printf("Expression MOD matched\n");
										$$ = ($1 % $3);
		  							  }

		  | expression POW expression { $$ = pow($1,$3);  printf("Expression POW matched\n");}
		  
		  | expression FACT {   printf("Expression FACT matched\n");

								int mult=1 ,i;
								for(i=$1;i>0;i--)
								{
									mult=mult*i;
								}
								$$=mult;
								
							}	
		  | expression GOE expression	{
										   printf("Expression greater than or equal (GOE) matched\n");
			                               $$ = ($1 >= $3); 
		  								
										}

	      | expression LOE expression	{
										   printf("Expression less than or equal (LOE) matched\n");
			                               $$ = ($1 <= $3); 
		                                }

          | expression TWO_EQ expression {
										   printf("Expression equality (TWO_EQ) matched\n");
			                               $$ = ($1 == $3); 
		                                }

		  | expression NOT_EQ expression {
											printf("Expression inequality (NOT_EQ) matched\n");
											$$ = ($1 != $3); 
									     }

		  | expression AND expression {
											printf("Expression bitwise AND (AND) matched\n");
											$$ = ($1 & $3); 
									  }

		  | expression OR expression {
											printf("Expression bitwise OR (OR) matched\n");
											$$ = ($1 | $3); 
									 }

		  | expression NOT           {
											printf("Expression bitwise NOT (NOT) matched\n");
											$$ = (~ $1); 
									 }

		  | expression LOGICAL_OR expression {
											printf("Expression logical OR (OTHOBA) matched\n");
											$$ = ($1 || $3); 
									     }
		  | expression LOGICAL_AND expression {
											printf("Expression logical AND (EBONG) matched\n");
											$$ = ($1 && $3); 
									     }
		  | expression XOR expression {
											printf("Expression XOR (XOR) matched\n");
											$$ = ($1 ^ $3); 
									     }
									 
		  | LP expression RP		{ $$ = $2; printf("Expression parentheses matched\n");}

          | expression INC         { $$ = $2+1; printf("Expression increment (BARAU) matched\n");}
          
		  | expression DEC         { $$ = $2-1; printf("Expression decrement (KOMAU) matched\n");}
		   
          | SIN expression         {
			                        $$=$2;
									x=$2*(3.142/180);
									y=sin(x);
									printf("Value of sin(%d) = %.2lf\n",$2,y);
									}
		  | TAN expression         {
			                        $$=$2;
									x=$2*(3.142/180);
									y=tan(x);
									printf("Value of tan(%d) = %.2lf\n",$2,y);
									}
		  | COS expression         {
												$$=$2;
												x=$2*(3.142/180);
												y=cos(x);
												printf("Value of cos(%d) = %.2lf\n",$2,y);
												}

%%

void insert_var(save *p, char *s, int n)
{
  p -> var = s;
  p -> num = n;
}

int for_key(char *key)
{
    int i = 1;
    char *name = sv[i].var;
    while (name) {
        if (strcmp(name, key) == 0)
            return sv[i].num;
        name = sv[++i].var;
    }
    return 0;
}

void insert_var2 (save *p, char *s, int n)
{
  p -> var = s;
  p -> num = n;
  
}

int for_key2(char *key)
{
	
    int i = 1;
    char *name = sm[i].var;
	
    while (name) {
        if (strcmp(name, key) == 0)
		{
           return i;
		}
           
        name = sm[++i].var;
    }
    return 0;
}



yyerror(char *s){
	printf( "%s\n", s);
}
