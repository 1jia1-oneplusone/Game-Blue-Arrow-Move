# Game Blue Arrow Move
 The blue arrow hopes to escape from the jail, but is awaited by barriers and monsters. Can you help him?

**提示**

本程序编写于六年前，当时的中文字符存储方式与如今大相径庭，因此很可能在大部分机器上都无法正常显示地图甚至游玩。

**文件说明**

蓝箭移动管理员版.cpp：整个游戏的程序，不包含关卡内容。

k.m（k为正整数）：地图文件，含有第m关的地图信息，包含地图数组int mapk[21][21]和加载地图函数gk(int a[21][21],int &b,int &c)，a数组用于接收地图数组，b、c表示关卡中蓝箭初始位置。

kb.m：空白的k.m文件。

gs.m：include了所有的地图文件，并且包含一个函数void shuzi(int a)用于输出a%5的带圈圈数字。

README.md：本文件。