#include <stdio.h>


 int main ()
 int vowel,i,consonent,number,word,ot;

 {
     FILE *alp;
     char data [150],ch;
     printf("file opened successfully alphabet.txt\n");
     alp= fopen("alphabet.txt","r");
     if (alp==NULL)
     {
            printf("Error");
            return 1;

     }
     printf("Reading successfully alphabet.txt\n");
     while(fgets (data ,50, alp) !=NULL)

        printf( "%s",data);
        printf("file closed.txt");
        fclose(alp);

        i=vowel=consonent=number=word=ot=0;
        while({ch=data[i])!='\0')
        {
            if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'ch=='o'||ch=='O'||ch=='u'||ch=='U')

                vowel++;

        else if({ch>='a'&& ch<='z')||(ch>='A' &&  })
        }










 }



