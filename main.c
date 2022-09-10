#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Challenge exercises o
    /*int n;
    printf("tap  nomber");
    scanf("%d",&n);
    if (n%2==0){//the rule of the even number
        printf("number even ");
    }
    else{
        printf("number odd");
    }*/

//This program is part of a challenge
//The objective of this program is to convert the input from lower case to upper case ,end upper case to lower case
int cnt=0;
printf("if want end tap 1 \n");
while(cnt==0){
    char n;
    int c;
     printf("tap a lower case or an uppercase character :\n");
     scanf("%c",&n);
     c=n;

     void to_lower (){//create function
     int  a=90-c;
     printf("lower case  :%c \n ",122-a );
     }
      void to_upper (){
         int a=122-c;
        printf("upper case %c : \n ",90-a);
      }
    if(n=='1'){
        cnt=1;}
    else if(c<=122&&c>=97){
        to_upper();//call  function with name
}
    else if (c<=90&&c>=65){
        to_lower();
    }
    else{
       printf("invalid\n");}
    printf("-------------------------------------------------------------------------------------------- \n");
};


        return 0;
    }
