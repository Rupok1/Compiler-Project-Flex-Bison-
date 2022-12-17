%{
	#include<stdio.h>
	#include<string.h>
	#include "1807003.tab.h"

%}

alpha [a-zA-Z]
digit [0-9]
vognangsho	[0-9]+[.][0-9]+
var [a-z|A-Z]+[_0-9]*
condition (LT|GT|LOE|GOE|NOT|EQ|TWO_EQ|NOT_EQ)
condition_key "SHORTO"|"ABAR_SHORTO"|"LAST_SHORTO"
types "NUMBER"|"DECIMAL"|"ALPHABET"|"DUPLICATE"|"LONG"
single_line_comment [/][/][.]*
multiple_line_comment [ ]*[<][-][-][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t]*[!][-][>]

%%



"#ONTORVUKTO"[ ]"LT"[ ]{var}".h"[ ]"GT" 		{return HEADER;}

"SHURU_KORLAM"          {return MAIN;}
"#DEF" 		     	 	{return DEFINE;}


"ALPHABET"				{return CHAR;}
"NUMBER"				{return INT;}
"DECIMAL"				{return FLOAT;}
"DUPLICATE"				{return DOUBLE;}
"LONG"					{return LONG;}

"SHORTO"				{return IF;}
"ABAR_SHORTO"			{return ELSE;}
"LAST_SHORTO"			{return ELSE_IF;}

"LOOP"					{return FOR;}
"JOKHON"				{return WHILE;}

"GOE"					{return GOE;}
"LOE"					{return LOE;}
"TWO_EQ"				{return TWO_EQ;}
"NOT_EQ"				{return NOT_EQ;}
"GT"					{return GT;}
"LT"					{return LT;}
"EQ"					{return EQ;}
"LB"					{return LB;}
"RB"					{return RB;}
"LP"					{return LP;}
"RP"					{return RP;}
"$"						{return END;}
"@"						{return COL;}
"DASH"					{return DASH;}
"COMA"					{return COMA;}
"QT"					{return QT;} 


"NOT"					{return NOT;}
"OR"					{return OR;}
"AND"					{return AND;}

"JOG"					{return PLUS;}
"BIYOG"					{return MINUS;}
"GUN"					{return MULT;}
"VAG"					{return DIV;}
"MOD"					{return MOD;}
"POW"					{return POW;}
"FACT"                  {return FACT;}
"BARAU"					{return INC;}
"KOMAU"					{return DEC;}
"OTHOBA"				{return LOGICAL_OR;}
"EBONG"					{return LOGICAL_AND;}
"XOR"					{return XOR;}
"SN"                    {return SIN;}
"KOS"                   {return COS;}
"TNG"                   {return TAN;}
"LOG10"                 {return LOG10;}

"KHALI" 				{return VOID;}
"FEROT" 				{return RETURN;}
"CHOICE" 				{return CASE;}
"BER_HOU" 				{return BREAK;}
"GO" 					{return CONTINUE;}
"OPTION" 				{return SWITCH;}
"READ" 				    {return SCAN;}
"DISPLAY" 				{return PRINT;}
"JEKONO" 				{return DEFAULT;}
"FUNC"	    			{return FUNC;}

{digit}+				{ yylval.number = atoi(yytext);
							return NUM;}

{var}                   { yylval.string = strdup(yytext);
							return VAR;}

[ \t\n]*
.						{printf("%s --> invalid\n",yytext);}

{single_line_comment} {printf("single line comment\n");}
{multiple_line_comment} {printf("multiple_line_comment\n");}
%%

int yywrap()
{
 return 1;
}

int main()
{

     freopen("input.txt","r",stdin);
	 freopen("output.txt","w",stdout);

	 yyparse();
    
	return 0;
}
