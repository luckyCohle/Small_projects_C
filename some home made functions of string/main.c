#include <stdio.h>
int len_str(const char  A[]);
int concat(char *A,char *B;);
int compstr(char* strA,char* strB);

int main (){
     char  word1[]="aayush ";
     char word2[]="is awesome";
     char word3[]="awesome";
     char word4[]="aayush ";

    printf("%d\n  %d\n    ",len_str(word1),len_str(word2));
    concat(word1,word2);
   if(compstr(word1,word4)==1)
    printf("same");
    else
        printf("not same");






}

int len_str(const char A[]){
int i=0;
while(A[i]!='\0')
{


    i++;
}

    return i;


}

int concat(char *A, char *B)
{
int i,j;
int len1, len2,len3;
len1=len_str(A);
len2=len_str(B);

// len1 is the length of first string
//len2 is the length of second string
while(i<=len2)
{
    A[len1+i]=B[i];
    i++;
}

printf("%s\n",A);
return A;
}

  int compstr(char* strA,char* strB)
{
    int i=0;
    int comp;
    while(strA[i]!='\0'&&strB[i]!='\0')
    {
        if (strA[i]!=strB[i])
    {
        return 0;

        comp=0;
        break;
    }
    i++;
}
if((i>=len_str(strA)&&i>=len_str(strB))&&strA[i]=='0'&&strB[i]=='0')
    comp=1;
    return 1;

}


