#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <math.h>

int main(){
    FILE *file_input,*file_output;
    int x=0;
    int i=0;
    char file_name[64]="codeblocks-20.03mingw-setup.exe";
    char cpfile_name[64]="xcopy-0601.exe";
    printf("�п�J�ӷ��ɦW:");
    scanf("%s",file_name);
    printf("�п�J�ت��ɦW:");
    scanf("%s",cpfile_name);

    file_input=fopen(file_name,"rb");
    file_output=fopen(cpfile_name,"wb");
    printf("\n\n-���b���սƻs-\n\n");
    if(!file_input||!file_output){printf("\n\n��Ʀ��~!!\n\n");return 0;}i=0;
    while((x=fgetc(file_input))!=EOF){fputc(x,file_output);i++;}system("cls");
    printf("\n\n���槹��!!\n�@�ƻs�F%d��Byte(��%.2fKB)\n\n",i,(float)i/1024);
    fclose(file_input);
    fclose(file_output);
    system("pause");
return 0;}
