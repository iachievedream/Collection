如何在Jupyter Notebook中使用Python虚拟环境？
https://zhuanlan.zhihu.com/p/29564719

~~~
给这个用于学习Python 3版本Tensorflow的虚拟环境起了个好记的名字，叫做tfpy3。

进入终端环境，使用Anaconda的环境创建命令，一行代码就可以创建成功。
conda create -n tfpy3 python=3

我在~/learn/实验目录下创建了一个名为tensorflow的文件夹。创建好后进入。
cd learn/tensorflow

下面我们呼唤刚才创建的虚拟环境：
source activate tfpy3

在这个虚拟环境下，我们就可以安装针对Python 3.6的最新版Tensorflow了。
pip install tensorflow

好了，1.3.0版本tensorflow安装成功。下面我们就呼叫Jupyter Notebook，来编码吧！
jupyter notebook

回到终端下面，用C-c退出目前正在运行的Jupyter Notebook Server，然后执行：
conda install nb_conda

再重新开启Jupyter Notebook：
jupyter notebook

我们选择刚刚创建的tfpy3环境。

执行：
import tensorflow as tf
tf.VERSION
*****************************************
#创建名字为 tfpy3 的虚拟环境，使用python3
conda create -n tfpy3 python=3

3. 配置jupyter notebook新kernel
如果按照上一步来的话，已经在虚拟环境里了，这步可省略/#进入虚拟环境 tfpy3
source activate tfpy3

#安装新内核

conda install pip
conda install ipykernel # or pip install ipykernel

# tfpy3 是之前我们安装虚拟环境的名字
python -m ipykernel install --user --name tfpy3  --display-name "tfpy3"

新的kernel就已经安装到我们的虚拟环境下了：
Installed kernelspec tfpy3 in /Users/xyza/Library/Jupyter/kernels/tfpy3

为了让新安装的虚拟环境的kernel可以被其他环境的jupyter知道，还要进行下面的操作
python3 -m ipykernel install --sys-prefix --name 'tfpy3'

4. 安装tensorflow
conda update --all
conda install -c conda-forge tensorflow
~~~
用conda建立及管理python虛擬環境
學習如何利用conda為每一個不同需求的專案建立一個獨立適合的虛擬環境
https://medium.com/python4u/%E7%94%A8conda%E5%BB%BA%E7%AB%8B%E5%8F%8A%E7%AE%A1%E7%90%86python%E8%99%9B%E6%93%AC%E7%92%B0%E5%A2%83-b61fd2a76566
~~~
假設我們要建立一個叫做myenv的虛擬環境，並且是安裝python 3.5的版本，那我們可以鍵入下面的命令。
conda create --name myenv python=3.5
~~~
簡要版整理
~~~
conda –V #檢查目前版本
conda update conda #更新目前版本
conda update anaconda #把 Anaconda 整個更新
******************************
conda env list #看目前系統已經安裝幾個虛擬環境
conda create -n tfpy2 python=2 #创建名字为 tfpy2 的虚拟环境，使用python2
activate tfpy2 #啟動虛擬環境  **如果你是LINUX或macOS，那你所需輸入啟動的方式將會是source activate tfpy2
conda list #現在這個環境裝的套件
conda install numpy #安裝所需套件
deactivate #離開虛擬環境 *而在macOS或LINUX則可以使用source deactivate
conda remove --name tfpy2 numpy #刪除虛擬環境或package
conda env remove --name tfpy2 #刪除整個虛擬環境
******************************
在不同的虛擬環境("environments")使用"jupyter"
activate tfpy2 #啟動虛擬環境
deactivate#離開虛擬環境
python -m ipykernel install --user --name tfpy2 --display-name "Python (tfpy2)"

python -m ipykernel remove --user --name tfpy2 --display-name "Python (tfpy2)"
~~~
[Python] 「純」Windows 下的 Deep Learning
http://yenlung-blog.logdown.com/posts/1598592
~~~
conda create -n tensorflow python=3.5 anaconda #建個新的 Anaconda 虛擬環境

安裝 TensorFlow
轉到我們剛做好的 tensorflow 環境。
activate tensorflow #轉到我們剛做好的 tensorflow 環境。
然後安裝 TensorFlow:pip install tensorflow #
安裝 Keras 2
在寫這篇文章時, 安裝 Keras 2 的時候它會很貼心幫忙再裝 TensorFlow 而且會失敗。所以我們才要先裝 TensorFlow, 然後裝 Keras 時叫它不用那麼貼心, 裝相關套件。

pip install --no-deps keras #
這樣就在 Windows 下有個 Deep Learning 的完整學習環境了!
~~~
打造 Jupyter Notebook 資料科學環境
https://medium.com/datainpoint/jupyter-kernels-3151a6408bab
~~~
conda env list查看當下可以使用的 conda 虛擬環境
jupyter kernelspec list #Jupyter Notebook 運算核心

conda create -n python2 python=2.7.15 #新增虛擬環境與運算核心
（新版的指令更新為 conda activate python2）

啟動虛擬環境之後安裝 ipykernel 模組才能夠新增 Jupyter Notebook 的運算核心。
source activate python2
pip install ipykernel

最後一個終端機指令是新增運算核心：
python -m ipykernel install --user --name python2 --display-name "Python 2"

如果希望移除剛建立好的運算核心，可以輸入終端機指令並按下 y 確認：
jupyter kernelspec remove python2

移除 Python 2.7.15 的虛擬環境
source deactivate
conda remove --name python2 --all
~~~
