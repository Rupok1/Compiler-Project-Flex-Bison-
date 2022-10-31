alpha [a-zA-Z]
digit [0-9]
var [a-z|A-Z]+[0-9]*
condition (LT|GT|LOE|GOE|NOT|EQ|TWO_EQ|NOT_EQ)
multipleLineComment LT[ ]DASH[ ]DASH[ ]({var}|[ ]|"\n")*NOT[ ]DASH[ ]GT

%%
"#ONTORVUKTO" 			{printf("#include");}
"#DEF" 		     	 	{printf("#define");}


"ALPHABET"				{printf("character ");}
"NUMBER"				{printf("int ");}
"VOGNANGSHO"			{printf("float ");}
"DUPLICATE"				{printf("double ");}
"LONG"					{printf("long ");}
"SHORTO"				{printf("if ");}
"ABAR SHORTO"			{printf("else if ");}
"LAST SHORTO"			{printf("else ");}

"JOKHON"[ ]"LP"[ ]{var}[ ]{condition}[ ]{digit}+[ ]"RP"																{printf("while ");}
"KORO"[ ]"LB"[ ]"RB"[ ]"JOKHON"[ ]"LP"[ ]{var}[ ]{condition}[ ]{digit}+[ ]"RP" 										{printf("do while loop");}
"Loop"[ ]"LP"[ ]{var}[ ]"EQ"[ ]{digit}+"$"[ ]{var}[ ]{condition}[ ]{digit}+"$"[ ]{var}[ ]("BARAU"|"KOMAU")[ ]"RP" 	{printf("for ");}

"GOE"					{printf(">=");}
"LOE"					{printf("<=");}
"TWO_EQ"				{printf("==");}
"NOT_EQ"				{printf("!=");}
"GT"					{printf(">");}
"LT"					{printf("<");}
"EQ"					{printf("=");}
"LB"					{printf("{");}
"RB"					{printf("}");}
"LP"					{printf("(");}
"RP"					{printf(")");}
"$"						{printf(";");}
"@"						{printf(":");}
"DASH"					{printf("-");}

"NOT"					{printf("!");}
"OR"					{printf("|");}
"AND"					{printf("&");}

"JOG"					{printf("+");}
"BIYOG"					{printf("-");}
"GUN"					{printf("*");}
"VAG"					{printf("/");}
"MOD"					{printf("%");}
"BARAU"					{printf("++");}
"KOMAU"					{printf("--");}
"OTHOBA"				{printf("||");}
"EBONG"					{printf("&&");}

"KHALI" 				{printf("void");}
"FEROT" 				{printf("return");}
"CHOICE" 				{printf("case");}
"BER_HOU" 				{printf("break");}
"GO" 					{printf("continue");}
"OPTION" 				{printf("switch");}
"READ" 				    {printf("scanf");}
"DISPLAY" 				{printf("printf");}



{var}					{printf("%s",yytext);}
{digit}					{printf("%s",yytext);}
{multipleLineComment}   {printf("multipleLineComment");}
.
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
