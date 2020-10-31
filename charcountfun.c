#include <stdio.h>

int countVowels(char*);
int countConsonants(char*);
int countDigits(char*);
int countChars(char*);
int countWords(char*);
int countSpaces(char*);

int main(void){
	char str[200];
	int cVowels, cConsonants, cDigits, cChars, cWords, cSpaces;

	printf("Enter the line:\n");
    scanf("%[^\n]%*c", str);
	printf("You entered : %s\n",str);


cVowels=countVowels(str);
cConsonants=countConsonants(str);
cDigits=countDigits(str);
cChars=countChars(str);
cWords=countWords(str);
cSpaces=countSpaces(str);


	printf("Count of vowels: %d\n",cVowels);
	printf("Count of consonants: %d\n",cConsonants);
	printf("Count of digits: %d\n",cDigits);
	printf("Count of characters: %d\n",cChars);
	printf("Count of words: %d\n",cWords);
	printf("Count of spaces: %d\n",cSpaces);
	return 0;

}
int countVowels(char* str){
    	int cVowels=0, i;
    for(i=0; str[i]!='\0'; ++i)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
str[i]=='o' || str[i]=='u' || str[i]=='A' ||
str[i]=='E' || str[i]=='I' || str[i]=='O' ||
str[i]=='U')
{
++cVowels;
}
}
return cVowels;
}

int countConsonants(char* str){
    int cVowels=0,cConsonants=0, i;
    for(i=0; str[i]!='\0'; ++i)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
str[i]=='o' || str[i]=='u' || str[i]=='A' ||
str[i]=='E' || str[i]=='I' || str[i]=='O' ||
str[i]=='U')
{
++cVowels;
}
else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
{
++cConsonants;
}
}
return cConsonants;
}
int countDigits(char* str){
    int cDigits=0,i;
    for(i=0; str[i]!='\0'; ++i){
     if(str[i]>='0' && str[i]<='9')
{
++cDigits;
}
    }
    return cDigits;
}
int countChars(char* str){
  int cChars=0, cVowels=0,cConsonants=0,cSpaces=0,cDigits=0, i;
    for(i=0; str[i]!='\0'; ++i)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
str[i]=='o' || str[i]=='u' || str[i]=='A' ||
str[i]=='E' || str[i]=='I' || str[i]=='O' ||
str[i]=='U')
{
++cVowels;
}
else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
{
++cConsonants;
}
else if(str[i]>='0' && str[i]<='9')
{
++cDigits;
}
else if(str[i]==' ')
{
++cSpaces;
}
else{
++cChars;
}
}
return cChars;
}

int countWords(char* str){
      int cWords=0,i;
    for(i=0; str[i]!='\0'; ++i){
       if( str[i]==' ' && str[i+1]!=' ')
        
{
++cWords;
}
}
return (cWords+1);
}

int countSpaces(char* str){
     int cSpaces=0,i;
    for(i=0; str[i]!='\0'; ++i){
     if(str[i]==' ')
{
++cSpaces;
}
    }
    return cSpaces;
}
