#include <stdio.h>

int sufPref (char s1[], char s2[]){
    int i,j=0,r=0;

    for(i=0;s1[i];i++){
        if(s1[i]==s2[j]){
            r++;
            j++;
        }else{
            r=0;
            j=0;
        }
    }
    return r;
}

