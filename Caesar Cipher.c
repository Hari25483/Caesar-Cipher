#include <stdio.h>

//Defining functions
int rotateright (int ch);
int rotateleft (int ch);
int encode(int ch, int shift);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int shift,i;
    char string[75];
    scanf("%d\n",&shift);
    printf("Here is the encoded text:\n");

    //Taking inputs from multiple or single line text
    scanf("%[^\t]",string);

    //Looping through each character and check whether they are in between alphabets, and do the encoding.
    for (i=0; string[i]!='\0'; i++){
         if ((string[i]>='A' &&'Z'>=string[i])||(string[i]>='a' &&'z'>=string[i])) {
            string[i]=encode(string[i],shift);
        }
    }
    printf("%s\n",string);

    return 0;
}

int encode(int ch,int shift){
      if (shift>=0) {
        for (int i=0; i<shift; i++) {
            //To stop the letters from going out of range of alphabets, we define conditons for z, and Z.
            if(ch=='z'){
                ch =ch-25;
            } else if (ch=='Z'){
                ch =ch-25;
            } else {
                ch = rotateright(ch);
            }
        }
    }
     else if (shift<=0) {
        for (int i=shift; i<0; i++) {
            //To stop the letters from going out of range of alphabets, we define conditons for a, and A.
            if(ch=='a'){
                ch =ch+25;
            } else if (ch=='A'){
                ch =ch+25;
            } else {
                ch = rotateleft(ch);
            }
        }
    }
    return ch;
}

//rotate a string by +1
int rotateright (int ch){
     ch=ch+1;
     return ch;
}

//rotate a string by -1.
int rotateleft (int ch){
    ch=ch-1;
    return ch;
}
