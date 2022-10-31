alpha [a-zA-Z]
digit [0-9]
var [a-z|A-Z]+[0-9]*
condition (LT|GT|LOE|GOE|NOT|EQ|TWO_EQ|NOT_EQ)
types ("NUMBER"|"DECIMAL"|"ALPHABET"|"DUPLICATE"|"LONG")
singleLineComment 	SLASH_SLASH
multipleLineComment LT[ ]DASH[ ]DASH[ ]({var}|[ ]|"\n")*NOT[ ]DASH[ ]GT



%%
"#ONTORVUKTO" 			{printf("#include");}
"#DEF" 		     	 	{printf("#define");}


"ALPHABET"				{printf("character ");}
"NUMBER"				{printf("int ");}
"DECIMAL"				{printf("float ");}
"DUPLICATE"				{printf("double ");}
"LONG"					{printf("long ");}

"SHORTO"				{printf("if ");}
"ABAR SHORTO"			{printf("else if ");}
"LAST SHORTO"			{printf("else ");}

"JOKHON"[ ]"LP"[ ]{var}[ ]{condition}[ ]({digit}+|{var})[ ]"RP"																{printf("while loop matched");}
"KORO"[ ]"LB"[ ]"RB"[ ]"JOKHON"[ ]"LP"[ ]{var}[ ]{condition}[ ]({digit}+|{var})[ ]"RP" 										{printf("do while loop matched");}
"Loop"[ ]"LP"[ ]{var}[ ]"EQ"[ ]{digit}"$"[ ]{var}[ ]{condition}[ ]({digit}+|{var})"$"[ ]{var}[ ]("BARAU"|"KOMAU")[ ]"RP" 	{printf("for loop matched");}

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
"DOT"					{printf(".");}
"COMA"					{printf(",");}
"QT"					{printf("\"");} 
"SLASH_SLASH"			{printf("//");} 

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
"JEKONO" 				{printf("default");}


{var}					{printf("%s",yytext);}
{digit}					{printf("%s",yytext);}
{multipleLineComment}   {printf("multipleLineComment");}

"/t"					{printf("	");}
"  "					{printf(" ");} 
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
