#include <stdio.h>
#include<string.h>
#include<ctype.h>


int main() {
char arr[100];
char words[100][100];
int freq[100];
fgets(arr,100,stdin);
int wordcount=0,j;
char* p= strtok(arr," ");
while(p != NULL)
{
    int found=0;
     j=0;
    for(int i=0;i<strlen(p);i++)
    {
        if(isalpha(p[i]))
        {
            words[wordcount][j++]=tolower(p[i]);
            found=1;
        }
    }
        if(found)
        {
            words[wordcount][j]='\0';
            wordcount++;
        }
        p=strtok(NULL," ");

}
int longest=strlen(words[0]);
char *longestword = words[0];
for(int i=1;i<wordcount;i++){
 
   if(strlen(words[i])>longest){
       longest=strlen(words[i]);
       longestword = words[i];
   }
   
    
}
printf("%d %s",longest,longestword);
 return 0;   
}










