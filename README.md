# プロジェクトタイトル

42_get_next_line

## 概要

ファイルに書かれている文字列の内容を一行ずつ読み取ります。

## 動機

42Tokyoの課題であり、また、  
適切なmalloc、freeの処理、open、closeの処理、  
static変数によるデータセグメントへの保存、取り扱いなどを学ぶため作成しました。

## 使用方法

> - **normal**  
> main関数をget_next_line.cに書き

> ```bash php
> #!/bin/bash
> cd 42_get_next_line
> cc get_next_line.c get_next_line_utils.c
> ```

> - **bonus**  
> main関数をget_next_line_bonus.cに書き

> ```bash php
> #!/bin/bash
> cc get_next_line_bonus.c get_next_line_utils_bonus.c
> ```


## 参考main関数

> - **test.txt の作成** 
> ```bash
> #!/bin/bash
> touch test.txt ; echo aaa > test.txt
> ```

> ```php
> int main()
> {
> 	int fd;
> 	char *line;
> 
> 	fd = open("test.txt", O_RDONLY);
> 	while ((line = get_next_line(fd)))
> 	{
> 		printf("%s\n", line);
> 		free(line);
> 	}
> 	close(fd);
> 	return (0);
> }  
> ```


## 技術スタック

C言語

## 機能

> `get_next_line`  

