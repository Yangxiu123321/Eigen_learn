#!/bin/bash

git config --global user.email "13390560336@163.com"
git config --global user.name "Yangxiu123321"

git status
git add -A
#echo "请输入cimmit的文字"
read -p "请输入commit文本:" $a
git commit -m "shell提交:$a"

#echo "是否需要提交(y/N)"
read -p "是否需要提交(y/N):" choose
if [ "$choose" == "y" ]||[ "$choose" == "y" ];then
	#echo "请输入需要提交的分支名称"
	read -p "请输入需要提交的分支名称(Current branch):" branchName
	if [ "$branchName" != "" ];then
		echo "正在push:git push origin $branchName"
		git push
	else
		git push origin $branchName
	fi		
	#echo"正在执行命令:git push origin $branchName"
	#git push origin $barnchName
else
	echo"你没有push"
fi

