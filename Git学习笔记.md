# Git

ps:整理自[廖雪峰的Git教程](https://www.liaoxuefeng.com/wiki/896043488029600)

## 创建库

### 设置用户名和邮箱

global指针对所有库设置，也可以针对某个库设置用户名和邮箱

```
$ git config --global user.name "Your name"
$ git config --global user.email "email@example.com"
```

###  创建版本库

在一个合适的地方创建一个新目录通过`cd`打开到文件夹

通过`pwd`显示当前文件夹

通过`git init`把该文件夹变成一个git可以管理的仓库

## 管理文件

### 添加文件

把文件拉到仓库的目录，使用`git add`命令将文件添加到暂存区

此时可以用`git stutus`查看库状态，会提示有一个文件需要提交

再使用`git commit`命令将暂存区的文件保存，并填写一段修改信息，如：

```
$ git commit -m "correst the wrong"
```

此时再输入`git status`就可以了.

### 修改文件

修改完文件，可以先输入`git diff`查看修改

确定无误后就像添加文件一样先add 再commit即可。

### 版本回退

`git log`命令可以查看每个版本的修改，即每次commit提交的内容和版本号

`git reset --hard +版本号`即可回退到版本，并且有两种方式

* 版本号可以是`HEAD``HEAD^``HEAD^^`。其中`HEAD`表示当前版本，`HEAD^`表示上一个版本，以此类推，如果版本号太多可以用`HEAD~n`n表示^的个数
* 版本号也可以是输入`git log`后commit后面的前五位。

如果回退后后悔了可以使用`git relog`查看版本号再回退

### 撤销修改

* 工作区的修改`git checkout -- <file>`
* 暂存区的修改`git reset HEAD <file>`再`git checkout -- <file>`

### 删除文件

在本地区删除文件`rm <file>`,然后再用`git add`提交到暂存区，再用`git commit`提交到版本库

如果删错了可以用`git checkout -- <file>`等命令复原

## 远程仓库

### 创建SSH-Key

```
$ ssh-keygen -t rsa -C "youremail@example.com"
```

创建SSH-Key，然后在C盘用户里面找到.ssh文件夹，把pub的复制到GitHub上并添加

### 关联库

`git push -u origin master`推送修改

