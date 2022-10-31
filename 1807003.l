alpha [a-zA-Z]
digit [0-9]
vognangsho	[0-9]+[.][0-9]+
var [a-z|A-Z]+[0-9]*
condition (LT|GT|LOE|GOE|NOT|EQ|TWO_EQ|NOT_EQ)
condition_key "SHORTO"|"ABAR_SHORTO"|"LAST_SHORTO"
types "NUMBER"|"DECIMAL"|"ALPHABET"|"DUPLICATE"|"LONG"

%%
"#ONTORVUKTO"[ ]"LT"[ ]{var}".h"[ ]"GT" 		{printf("include header file");}

"SHURU_KORLAM"          {printf("main function start");}
"#DEF" 		     	 	{printf("#define");}


"ALPHABET"				{printf("character type \n");}
"NUMBER"				{printf("Integer type \n");}
"DECIMAL"				{printf("float type \n");}
"DUPLICATE"				{printf("double type \n");}
"LONG"					{printf("long type \n");}

"SHORTO"				{printf("if condition");}
"ABAR_SHORTO"			{printf("else if condition");}
"LAST_SHORTO"			{printf("else condition");}



"JOKHON"[ ]"LP"[ ]{var}[ ]{condition}[ ]({digit}+|{var})[ ]"RP"																    {printf("while loop matched");}
"KORO"[ ]"LB"[ ]"RB"[ ]"JOKHON"[ ]"LP"[ ]?{var}[ ]{condition}[ ]({digit}+|{var})[ ]"RP" 										{printf("do while loop matched");}
"Loop"[ ]"LP"[ ]{var}[ ]"EQ"[ ]{digit}"$"[ ]{var}[ ]{condition}[ ]({digit}+|{var})"$"[ ]{var}[ ]("BARAU"|"KOMAU")[ ]"RP" 	    {printf("for loop matched");}

"FUN"[ ]({types}|"KHALI")[ ]{var}[ ]"LP"([ ]{types}[ ]{var})?[ ]"RP"                                                            {printf("function declared");}

"OPTION"[ ]"LP"[ ]({var}|{digit}+)[ ]"RP"[ ]"LB"				         {printf("switch declared");}				
("CHOICE"[ ]{digit}+"@"("\n")+"BER_HOU""$""\n")+"RB"           					 {printf("switch case");}

{types}[ ]{var}[ ]"EQ"[ ]{digit}+"$"		{printf("assignment checked");}
({var}|{digit}+)[ ]"TWO_EQ"[ ]({var}|{digit}+)"$"		{printf("equality checked");}
({var}|{digit}+)[ ]"NOT_EQ"[ ]({var}|{digit}+)"$"		{printf("INequality checked");}
({var}|{digit}+)[ ]"GT"[ ]({var}|{digit}+)"$"		{printf("greater than checked");}
({var}|{digit}+)[ ]"LT"[ ]({var}|{digit}+)"$"		{printf("less than checked");}
({var}|{digit}+)[ ]"GOE"[ ]({var}|{digit}+)"$"		{printf("greater than or equal checked");}
({var}|{digit}+)[ ]"LOE"[ ]({var}|{digit}+)"$"		{printf("less than or equal checked");}

"GOE"					{printf("greater than or eqal \n");}
"LOE"					{printf("less than or eqal \n");}
"TWO_EQ"				{printf("eqality checked \n");}
"NOT_EQ"				{printf("not equal \n");}
"GT"					{printf("greater than \n");}
"LT"					{printf("less than \n");}
"EQ"					{printf("assignment \n");}
"LB"					{printf("open braces \n");}
"RB"					{printf("close braces \n");}
"LP"					{printf("left parenthesis \n");}
"RP"					{printf("right parenthesis \n");}
"$"						{printf(" eof \n");}
"@"						{printf("colon \n");}
"DASH"					{printf("hypen \n");}
"COMA"					{printf("comma \n");}
"QT"					{printf("double quote \n");} 
"SLASH_SLASH"			{printf("single_line_comment");}

"<--"					{printf("comment_start\n");}
"!->"					{printf("comment_end");}

"NOT"					{printf("bitwise not sign \n");}
"OR"					{printf("bitwise or sign \n");}
"AND"					{printf("bitwise and sign \n");}

"JOG"					{printf("addition operator \n");}
"BIYOG"					{printf("subtraction \n");}
"GUN"					{printf("multiplication \n");}
"VAG"					{printf("division \n");}
"MOD"					{printf("modular \n");}
"POW"					{printf("power \n");}
"BARAU"					{printf("increment \n");}
"KOMAU"					{printf("decrement \n");}
"OTHOBA"				{printf("logical or \n");}
"EBONG"					{printf("logical and \n");}
"XOR"					{printf("xor operator \n");}

"KHALI" 				{printf("void \n");}
"FEROT" 				{printf("return");}
"CHOICE" 				{printf("case \n");}
"BER_HOU" 				{printf("break \n");}
"GO" 					{printf("continue \n");}
"OPTION" 				{printf("switch \n");}
"READ" 				    {printf("scanf \n");}
"DISPLAY" 				{printf("printf \n");}
"JEKONO" 				{printf("default \n");}

"sn"[ ]"LP"[ ]({var}|{digit}+)[ ]"RP"       {printf("sine checked \n");}
"kos"[ ]"LP"[ ]({var}|{digit}+)[ ]"RP"       {printf("cosine checked \n");}
"tng"[ ]"LP"[ ]({var}|{digit}+)[ ]"RP"       {printf("tan checked \n");}

{types}[ ]{var}[ ]?(("EQ")?[ ]?{digit}+?)([ ]?("COMA")?{var}[ ]?(("EQ")?[ ]?{digit}+?))*"$"												{printf("variable declared \n");}
{condition_key}([ ]?"LP"?[ ]?{var}?[ ]?{condition}?[ ]?{digit}+?[ ]?"RP"?)?																{printf("if else key checked \n");}			
{types}[ ]{var}"["{digit}+"]""$"																											{printf("array declared");}

{digit}					{printf("value");}
{var}                   {printf("%s",yytext);}
"\t"					{printf("	");}
"  "					{printf(" ");} 
%%

int yywrap()
{
 return 1;
}

int main()
{

     freopen("input.txt","r",stdin);
	 freopen("output.txt","w",stdout);

	  yylex();
    
	return 0;
}
