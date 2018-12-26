如何使用Eclipse aCute来进行C#和.NET Core开发
~~~
之前呢，笔者一直使用Eclipse进行Java的开发和学习。笔者所在的部门接到新的项目需要进行C#来开发，
人手不足只好凑调过来进行Support.也想有个机会来学习一下和JAVA语法相似的.NET开发。

公司是美国公司要求用正版的Visual Studio来开发，在新的软件购买来之前需要临时学习一下（笔者公司的电脑软件安装需要IT部来进行，笔者是没有权限来安装的。）这时候就想到了Eclipse,Eclipse解压下来就可以进行开发，
虽不需要安装但前提是要安装好JAVA运行环境，毕竟Eclipse是JAVA开发的。

所以大家在进行JAVA开发的，就可以省去安装JAVA SDK这一步了。

笔者进行C#开发当然也少不了C和C++开发，当然要先下载安装Eclipse for C & C++版本了。
下面来详细介绍安装步骤。

1.下载Eclipse for C & C++版本（注意要选择最新的OXYGEN版哦，不然不支持C#开发的），
附上最新下载地址（根据你的系统版本选择32位或64位）：

https://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/oxygen2

安装完打开Eclipse,如下图所示

想了解Eclipse aCute项目的可以参考官方地址: https://projects.eclipse.org/projects/tools.acute/downloads
3.在Eclipse的菜单下选择help\Install New Software，进入如下界面，并输入界面中的acute安装地址：
http://download.eclipse.org/acute/snapshots/

4.输入地址后Eclipse会自动搜索安装文件，按如下界面勾选选项：

9.安装完成后，选择About Eclipse菜单，点击Installation Details，
可以看到aCute已经安装到eclipse里面了。如下图所示：

在用Eclipse建立.NET项目之前，要进行.NET运行环境的设置，也就是要指定dotnet.exe命令的地址。
.NET Core SDK可以从微软官方网站下载。在Eclipse的Windows菜单项下选择Preferences,
在左侧选项栏里面选择General.NET Core如下图所示，进行环境设置，点击APPLY and Close.

C:\Program Files\dotnet\dotnet.exe .NET Core SDK可以从微软官方网站下载:
https://www.microsoft.com/net/download

11.在WorkSpace项目文件夹下建立一个新文件名“HelloWorld”，用作项目名。
然后点击菜单new\project.NET core Project,选择下一步：

12.在Create a new .NET Core project对话框中的Location地址栏里面选择我们新建的文件夹HelloWorld，
作为项目名称，在下面的Project Template里面选择Console Application[C#],
当然你也可以选其他.NET项目模板。如下图所示：

13.点击完成后，系统自动生成项目并在program.cs源代码中生成输出”Hello World!“语句。
~~~
