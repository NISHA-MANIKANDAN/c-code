// Online C compiler to run C program online
#include <stdio.h>#include<string.h>#include<ctype.h>

int main() {char arr[100];
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
        if(isalpha(p[i])
    {
        words[wordcount][j++]=tolower(p[i]);
        found=1
        
    }
    } 
    if(found)
    {
        [wordcount][j]='\0';
        wordcount++;
        }
        p=strtok(NULL," \n");
}
for(int i=0;i<wordcount;i++){
    freq[i]=0;
    
}
for(int i=0;i<wordcount;i++){
        int count=1;
        if(freq[i]!=1)
        {
            for(int j=i+1;j<wordcount;j++)
            {
                if(strcmp(words[i],words[j])==0
                {
                    
                freq[j]=1;
                count++;
                }
                }
                printf("%s : %d\n",words[i],count);
                }
}
}
