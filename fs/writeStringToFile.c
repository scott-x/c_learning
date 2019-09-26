/*
* @Author: scottxiong
* @Date:   2019-09-26 22:44:58
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-26 23:11:38
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	char sentence[200];
	printf("Please input the sentence:");
	gets(sentence);//会报warning: this program uses gets(), which is unsafe.
	char filename[20];
	printf("请输入文件所在路径及名称:");
	scanf("%s",filename);

	// scanf("%s",sentence);
	;
    if ((fp = fopen(filename,"a"))==NULL) {
    	printf("打开失败\n");
    	return 0;
    }
    fputs(sentence,fp);
    fclose(fp);

    //read
    if ((fp=fopen(filename,"r"))!=NULL){
    	printf("%s的内容为:\n",filename);

    	while(fgets(sentence,sizeof(sentence),fp)) {
    	    printf("%s", sentence);
    	}
        printf("\n");
    	fclose(fp);
    }
	return 0;
}