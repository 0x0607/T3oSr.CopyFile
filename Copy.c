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
    printf("請輸入來源檔名:");
    scanf("%s",file_name);
    printf("請輸入目的檔名:");
    scanf("%s",cpfile_name);

    file_input=fopen(file_name,"rb");
    file_output=fopen(cpfile_name,"wb");
    printf("\n\n-正在嘗試複製-\n\n");
    if(!file_input||!file_output){printf("\n\n資料有誤!!\n\n");return 0;}i=0;
    while((x=fgetc(file_input))!=EOF){fputc(x,file_output);i++;}system("cls");
    printf("\n\n執行完成!!\n共複製了%d個Byte(約%.2fKB)\n\n",i,(float)i/1024);
    fclose(file_input);
    fclose(file_output);
    system("pause");
return 0;}
