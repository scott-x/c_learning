/*
* @Author: scottxiong
* @Date:   2019-09-24 23:14:50
* @Last Modified by:   scottxiong
* @Last Modified time: 2019-09-24 23:42:38
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE * fp;
    char ch;
    char filename[20];
    printf("请输入要读取的文件名:");
    scanf("%s",filename);
    //open
    fp = fopen(filename,"r");
    if (fp==NULL) {
    	printf("打开%s失败\n", filename);
    	return 0;
    }
    //如果没到文件尾部，一致读取
    while(!feof(fp)){
    	putchar(fgetc(fp));//fgetc一次只能读取一个字符；putchar显示
    }
    printf("\n");
    //close
    fclose(fp);
	return 0;
}

//********bug***********

//文件结尾会多出个问号

/*
import React, {Fragment,Component} from 'react';

class App extends Component{
	render(){
		return (
          <Fragment>
          	<div>hello world, I am Scott!</div>
          </Fragment>
		)
	}
}

export default App;?
*/