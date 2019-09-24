# file system

C 语言中操作文件的struct是 `FILE`

```c
FILE *fp;
char inputfile[20];
printf("请输入要打开的文件名:");
scanf("%s",inputfile);
fp = fopen(inputfile,"r"); //只读的方式打开 w a 
if (fp==NULL){
	printf("打开%s失败\n", );
	return 0;
}

while(!feof(fp)){
   putchar(fgetc(fp))
}
printf("\n")
fclose(fp);
```

以上代码有个bug，文件结尾会多出个`?`,[C语言复制文件内容时候最后多了个问号](https://zhidao.baidu.com/question/456304478.html)