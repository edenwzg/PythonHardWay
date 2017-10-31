git
    git@github.com:edenwzg/PythonHardWay.git
    git config --global user.email "you@example.com"
    git config --global user.name "Your Name"
    ssh-keygen -t rsa -C "youremail@example.com"
    git clone https://github.com/vnpy/vnpy.git
    'stage'
        git stage -A  // 提交所有变化
        git stage -u  // 提交被修改(modified)和被删除(deleted)文件，不包括新文件(new)
        git stage .   // 提交新文件(new)和被修改(modified)文件，不包括被删除(deleted)文件
    git status
    git commit -m "Describe Text"
    checkout 此命令是最常用的命令之一，同时也是一个很危险的命令，因为这条命令会重写工作区。
        git checkout //这条命令把 当前目录所有修改的文件 从HEAD中签出并且把它恢复成未修改时的样子。注意：在使用 git checkout 时，如果其对应的文件被修改过，那么该修改会被覆盖掉。
PowerShell
    在C盘创建一个 copy.txt 的文件 New-Item c:\copy.txt -type file
    在C盘创建一个 Directory 的目录 New-Item c:\Directory -type Directory
    查看 copy.txt 的文件内容 cat copy.txt 或者 type copy.txt
Mathematics
    {2017-10-13}
    正方形四周每边长 = a
    面积计算公式：S = a * a
    周长计算公式：C = 4 * a
    对角线长计算公式：sqrt(2) * a
    {2017-10-14}
    质数定义为在大于 1 的自然数中，除了 1 和它本身以外不再有其他因数。质数又称素数。否则称为合数。
    互质数两个数的公因数只有1的两个非零自然数,叫做互质数； 举例：2和3，公因数只有1，为互质数；
        多个数的若干个最大公因数只有1的正整数，叫做互质数；
        两个不同的质数，为互质数；
        1和任何自然数互质。两个不同的质数互质。一个质数和一个合数，这两个数不是倍数关系时互质。不含相同质因数的两个合数互质；
        任何相邻的两个数互质；
        任取出两个正整数他们互质的概率（最大公约数为一）为6/π^2。
    ｛2017-10-16｝
    正方体的棱长是每条边的长度
    圆形周长 C = πD = 2πR
    一个数立方的个位数就是这个数的各位数。
    {2017-10-17}
    平方根和算术平方根的区别与联系. 
        平方根的定义：若x²=a,则x为a 的平方根,若3²=9,3是9的平方根,（-3）²=9,-3是9的平方根
        算术平方根的定义：一个非负数的正的平方根叫做它的算术平方根 ,特别的,0的算术平方根为0。如：3和-3都是9的平方根,而3是9的算术平方根.
        联系：算术平方根是平方根中的一个
            正数有两个平方根,他们互为相反数,负数没有平方根,0的平方根是0。
            非负数的算术平方根只有一个
        5^6 的平方根是 5^3 Sublime
    每个设置之间用逗号间隔。
    Sublime3 的默认设置修改不了，必须复制到旁边的user设置里
python
    HardWay
        多行注释第一个"""必须在一行的行首"""       
        print() 用于输出内容
            print("text", end=''), end=''用于指定text后面的字符，默认是 \n 会在一行的结尾有一个 \n
            打印出来后我的字符串前面有个 u ，像 u'35' 这样。 它表示 Python 告诉你你的字符串是 unicode。使用 %s 就一切正常了。 
            用%r输出会按照写出来的方式（或者近似方式）打印，它是用来debug的原始格式。
            三个引号 """ 可以定义多行字符串，而 % 是字符串的格式化工具 """。  
        'python -m pydoc docstring' pydoc模块可以从python代码中获取docstring，然后生成帮助信息。
            python -m pydoc -w atexit   //在当前目录创建atexit.html，生成HTML输出
            python -m pydoc -p 5000    //启动一个Web服务器监听http://localhost:5000/在线浏览帮助文档
            命令行参数是字符串，就算你在命令行输入数字，你也需要用 int() 把它先转成数字。
        input() 用于获取用户输入
            python3.x系列不再有 raw_input 函数。3.x中 input 和从前的 raw_input 等效
        open(file_name) 返回一个 file_obj，这个 object 本身并不是文件的内容。 
            可以把它想象成一个磁带机。可以随意访问内容的任意位置，并且它有一个用来读取数据的“磁头”，你可以通过这个“磁头”来操作文件。 
            Python 不会限制你打开文件的次数，事实上有时候多次打开同一个文件是一件必须的事情。
            file_obj.truncate([size]) 方法用于从文件的首行首字符开始截断，截断文件为 size 个字符，无 size 表示从当前位置截断；截断之后后面的所有字符被删除。
            如果你用 open(file_name,'w') 模式打开文件，那么 file_obj.truncate() 不是必须的，因为 open(file_name,'w') 会"truncating the file first"。
        'import' 用于从外部导入其他python功能模块，也可以作为提示，在读代码时了解代码用到了哪些功能。我们把这些导入的功能称作模组。也有人称作“库(libraries)”。
            'from sys import argv' sys 是一个代码库，这句话的意思是从库里取出 argv 这个功能来，供我使用。
                argv 参数变量(argument variable)，是一个非常标准的编程术语。在其他的编程语言里你也可以看到它。这个变量包含了你传递给 Python 的参数。
                argv 解包(unpack)，将运行时的所有参数放到 argv 里。它的含义很简单：“把 argv 中的东西解包，将所有的参数依次赋予左边的变量名”。
            'import os' 导入os模块
                os.getcwd() #获取当前路径
                os.chdir("D:\\test") #跳到目标路径下 
            'from os.path import exists' 
                exists() 这个函数将文件名字符串作为参数，如果文件存在的话，它将返回 True，否则将返回 False
        read() 一旦运行， 文件就会被读到结尾并且被 close 掉
        write()
            file.write("stuff") 在 file.close() 后才会真正写入文件内容。
        round() 除非对精确度没什么要求,否则尽量避开用 round() 函数。对浮点数精度要求如果很高的话，用 decimal 模块。
        'def function(*args)' 中的 * 的功能是把函数的所有参数都接受进来，然后放到名字叫 args 的列表中去。和 argv 差不多，只不过前者是用在函数上面，但一般不常用。
            函数的参数的个数限制取决于 Python 的版本和操作系统，不过就算有限，限值也是很大的。实际应用中，5 个参数就不少了，再多就会让人头疼了。
        seek() 方法用于移动文件读取指针到指定位置。该函数没有返回值。
            file_obj.seek(offset[, whence])
            offset -- 开始的偏移量，也就是代表需要移动偏移的字节数
            whence：可选，默认值为 0。给offset参数一个定义，表示要从哪个位置开始偏移；
                0代表从文件开头开始算起，
                1代表从当前位置开始算起，
                2代表从文件末尾算起。   
            函数的处理对象是字节而非行，所以 seek(0) 只是转到文件的 0 byte，也就是第一个 byte 的位置。            
        readline() 里边的代码会扫描文件的每一个字节，直到找到一个 \n 为止，然后它停止读取文件，并且返回此前的文件内容。
            函数返回的内容中包含 \n
            file_obj.readline() 文件对象会记录每次调用 readline() 后的读取位置。
        pass 就是什么也不做，只是为了防止语法错误。
        '__future__' Python 3.x 引入了一些与 Python 2 不兼容的关键字和特性，在 Python 2 中，可以通过内置的 __future__ 模块导入这些新内容。如果希望在 Python 2 环境下写的代码也可以在 Python 3.x 中运行，建议使用 __future__ 模块，它必须放在文件的开头。
            'from __future__ import print_function' 在 python 2 中使用 print('xxx',end = ' ') 格式的 print() 函数
        range(n1, n2, setp) 函数会从第一个数到最后一个，但不包含最后一个数字。所以它在n2-1的时候就停止了。这种含首不含尾的方式是循环中极其常见的一种用法。setp 指定两个数之间相隔的步幅。
        elements.append(element) 的功能是在列表的末尾追加元素。
        for-loop 
            在循环开始时就定义了循环变量，当然每次循环它都会被重新定义一次
            for-loop 只能对一些东西的集合进行循环，while-loop 可以针对任意对象进行循环。
            一般任务用 for-loop 更加容易一些。
        while-loop 检查布尔表达式的真假，执行下面的代码，完后再回到 while 所在位置，如此重复进行，直到 while 表达式为 False 为止。
            尽量少用 while-loop，大部分时候使用 for-loop 是更好的选择。
            重复检查你的 while 语句，确定测试的布尔表达式最终会变为 False。
            如果不确定，就在 while-loop 的结尾打印出测试值，看看它的变化。
        # coding=gbk
            直接使用 u'中文' 形式，指明以unicode编码,解码方式会以顶部 #coding定义的编码方式，如果不写，以操作系统当前编码方法，建议写上#coding，因为要让操作系统编码和源文件编码经常会不一样。推荐使用这种方式。
        import random
            random.random() // 0~1 的随机浮点数
            random.uniform(a, b) // a~b 的随机浮点数
            random.randint(a, b) // a~b 的随机整数
            random.randrange([start,]stop[,step]) // 按指定基数递增的集合中 获取一个随机数
            random.choice(sequence) // 从序列中获取一个随机元素
            random.shuffle(lst) // 将一个列表中的元素打乱
            random.sample(sequence,k) // 从指定序列中随机获取指定长度的片断
        iPython 
            http://ipython.org/ 
            IPython 是一个加强版的交互式 Shell
            IPython 3 是整合 IPython 所有功能发布的最后一个版本。在新的版中，语言无关的代码，例如 notebook，将会移动到 Jupyter 下发布。
    数学计算
        {2017-10-13}
        5 ** 3                  // 立方
        17 ** 0.5               // 平方根
        8 ** (1.0 / 3)          // 立方根
    error
        SyntaxError: invalid syntax
            from 写成 form 
        ValueError: not enough values to unpack (expected 4, got 3)
            传递参数错误，用于解包的参数变量不足（预期为4个，得到3个）
        ImportError: cannot import name 'arvg'
            argv 写成 arvg .
        SyntaxError: from __future__ imports must occur at the beginning of the file
            from __future__ imports 必须放在文件的开头
financial
    第二章 资产类别与金融工具
    2.1 货币市场(money market)
        短期、变现能力强、流动性强、风险低、债务凭证。现金等价物，简称现金
        2.1.1 短期国库券(T-bills, bills)
            {2017-10-12}
            政府通过向公众出售国库券募集资金，投资者以面值的一定折扣购入国库券，当国库券到期时，持有者从政府那里获得面值，购买价格与面值之差构成了投资者的投资收益。
            大多数货币市场工具的最低交易面值是100000美元，而短期国库券的最低交易面值是100美元，更常见的是10000美元。
            此外，短期国库券的收益可以免除所有的州和地方税，这是其相比于其他货币市场工具又一特征。
            卖方报价（asked price）是指从证券交易商手中买入一张国库券时必须支付的价格。
            买方报价（bid price）是指将一张国库券卖给交易商时所能收到的价格，它略低于卖方报价。
            买卖价差（bid-asked spread）是指买方报价和卖方报价之间的差额，他是交易利润的来源。
            买方的收益率略高于卖方收益率，这是因为价格与收益率成反比。
            距离到期日还差36天的国库券为例，卖方报价的收益率是 0.043% ，通过计算 0.043% * (36/360) = 0.0043% ，
            意味着交易商愿意按面值折扣的 0.0043% 的价格将这种国库券出售。
            因此，面值为 10000 美元的国库券的出售价格是 10000 * (1-0.0043%) = 9999.57
            投资者购入的国库券在36天里涨了 10000 / 9999.57 - 1 = 0.0043%
            把这个收益率转换成按365天计算的年度收益率， 0.0043% * 365/36 = 0.044% 这便是基于卖方报价的收益率，被称为债券等值收益率（bond-equivalent yield）
            小额是指小于 100000 美元。
            买方报价的收益率 0.05% 计算 10000 * [1 - 0.05%*(36/360)] = 9999.50
            贴现法计算收益率有两方面不足：第一，它假设一年只有360天，第二，它以面值为基础而非以投资者的购买价格为基础计算收益率。
            https://baike.baidu.com/item/%E7%9F%AD%E6%9C%9F%E5%9B%BD%E5%BA%93%E5%88%B8/7196340?fr=aladdin
        2.1.2 大额存单(certificate of deposit, CD)
            {2017-10-13}
            大额存单是一种银行定期存款凭证，因此不能随时提取，银行只在大额存单到期时才向储户支付利息和本金。
            面额超过100000美元的大额存单通常是可以转让的。也就是说所有者可以在大额存单到期前将其出售给其他投资者，这样，能够以实际上的短期存款取得 按长期存款利率计算的利息收入。
            可转让存单最早产生于20世纪60年代的美国。由于美国政府对银行支付的存款利率规定上限；上限往往低于市场利率水平。为了吸引客户，商业银行推出可转让大额存单。
            我国大额存单于2015年6月15日正式推出，以人民币计价。并制定了《大额存单管理暂行办法》。
            作为一般性存款，大额存单比同期限定期存款有更高的利率，大多在基准利率基础上上浮40%，少部分银行上浮45%，而定期存款一般最高上浮在30%左右。
            大额存单被联邦存款保险公司视为一种银行存款，当银行出现偿债能力危机时，持有者可以获得25万美元的保额。
        2.1.3 商业票据(commercial paper)
            ｛2017-10-13｝
            知名的大型公司通常不会直接向银行借款，它们通常会发行短期无担保债务票据，即商业票据。
            商业票据是指由金融公司或某些信用较高的企业开出的无担保短期票据。
            商业票据的可靠程度依赖于发行企业的信用程度，可以背书转让，可以贴现。
            通常，银行票据由一定的银行信用额度支出，这样可以保证借款者在商业票据到期时有足够的现金来清偿。
            商业票据的期限通常在1~2个月以内，面值一般是100000美元的倍数。
            小型投资者不能直接投资商业票据，只能通过货币市场上的共同基金投资。
        2.1.4 银行承兑汇票(banker's acceptance bill)(BA)'
            ｛2017-10-13｝
            是指由银行客户向银行发出的在未来某一日期支付的一笔款项指令，期限通常是6个月。
            银行客户在承兑银行开立存款账户的存款人出票，向开户银行申请并经银行审查同意承兑的，保证在指定日期无条件支付确定的金额给收款人或持票人的票据。
            对出票人签发的商业汇票进行承兑是银行基于对出票人资信的认可而给予的信用支持。
            银行承兑汇票是由付款人委托银行开据的一种延期支付票据，票据到期银行具有见票即付的义务；
            当银行背书承兑后，银行开始负有向汇票持有者最终付款的责任，此时的银行承兑汇票可以像其他任何对银行的债券一样在二级市场上交易。
            向短期国库券一样，银行承兑汇票在面值的基础上折价销售。
        2.1.5 欧洲美元(Eurodollars)
            ｛2017-10-13｝
            是指国外银行或美国银行的国外分支机构中以美元计价的存款。
            由于这些银行或分支机构位于美国国外，因此它们可以不受美联储的监管。
            大多数欧洲美元存款是数额巨大且期限短语6个月的定期存款。
        2.1.6 回购和逆回购(repurchase agreements, repos 或 RPs)
            ｛2017-10-13｝
            政府证券的交易商使用回购协议作为一种短期（通常是隔夜）借款手段。
            交易商吧政府证券卖给投资者，并签订协议在第二天以稍高的价格购回。
            在逆回购。交易商找到持有政府证券的投资者买入证券，并协定在未来某一日期以稍高的价格售回给投资者。
        2.1.7 联邦基金(federal funds, fed funds)
            ｛2017-10-13｝
            像我们把钱存银行一样，银行会把钱存在联邦储备银行中。且账户要保持存底余额。这取决于银行客户的存款总额。准备金账户中额钱被称为联邦基金。
        2.1.8 经纪人拆借
        2.1.9 伦敦银行同业拆借市场
        2.1.10 货币市场工具的收益率
            ｛2017-10-13｝
            尽管货币市场证券的风险很低，但并不是没有风险。
            货币市场证券承诺的收益率高于无风险的短期国库券，部分原因是由于其风险相对较高。
            货币市场基金是一种对货币市场工具投资的共同基金。
        资本市场(capital market)
        长期的，风险较大
    2.2 债券市场
        2.2.1 中长期国债
        2.2.2 通胀保值债券
        2.2.3 联邦机构债券
        2.2.4 国际债券
        2.2.5 市政债券
        2.2.6 公司债券
        2.2.7 抵押贷款和抵押担保证券
    2.3 权益证券
        2.3.1 代表所有权股份的普通股
        2.3.2 普通股的特点
        2.3.3 股票市场行情
        2.3.4 优先股
        2.3.5 存托凭证
    2.4 股票市场指数与债券市场指数
        2.4.1 股票市场指数
        2.4.2 道琼斯工业平均指数
        2.4.3 标准普尔 500 指数
        2.4.4 其他美国市值加权指数
        2.4.5 等权重指数
        2.4.6 国外及国际股票市场指数
        2.4.7 债券市场指标
    2.5 衍生工具市场
        2.5.1 期权
        2.5.2 期货合约
    第三章 
personal
	Eden
		CCB|Debit card|6217003810019544033|中国建设银行成都高新支行会计科
		ICBC|Debit card|6212264402019864168|成都高新城南支行
		Ping An Bank|Debit card|6230580000107253390|平安银行大连东港支行
		CMBC|Debit card|6226220707032792|中国民生银行大连高新区科技支行
House
	Purchase
	Spruce up spend
		装修公司|金尚装饰
			总价 82000.00
				首付款 签约付款 30% 24600.00
				二期款 施工进场 40% 32800.00
				中期款 进场付款 25% 20500.00
				尾期款 测量橱柜 5% 4100.00
		装修额外花销 预计 10000
			总价
                水电改造
                开关插座
                浴室玻璃门
                阳台吊顶
                墙排水
		定制家具|伊美嘉衣柜
			总价 21750.00
				定金款 设计方案 500.00
				首款款 签约付款 80% 18000.00
				尾款款 货到付款 20% 3250.00
		封阳台|中信华龙
			总价 4170.00
				定金款 签约付款 50% 2000.00
				尾款款 验收合格 50% 2170.00
		物业装修管理
			总价 1397.27
				垃圾清运费 923.68
				电梯使用费 471.70
				其他工本费 1.89
		物业服务费 
			2017年 2881.92		
		购买家具家电 预估 30000
			家电
                净水器
                即热式热水器
                洗碗机
                洗衣机
            灯具
                客厅吊灯
                主卧吊灯
                次卧吊灯
                走廊射灯
                餐厅吊灯
            家具
                床头柜
                办公桌
                办公椅
                沙发
                餐椅
                茶几
                主卧床
                主卧衣柜
                儿童房书桌
                儿童房衣柜

WORK//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ToDoList
    //{2017-10-14,王泽光}制作AR营销方案ppt{2017-10-15}
    //{2017-10-15,邓云飞}计算AR运营定价{2017-10-15}
    {2017-10-16,王泽光}寻找AR毛绒玩具量产供应商{2017-10-20}
    //{2017-10-17,李洪林}制作AR微信端活动展示页面{2017-10-17}
    //{2017-10-16,李洪林}制作AR微信端游戏介绍页面{2017-10-17}
加班记录
    2017-10-08 09:00~14:00 5 节假日
    2017-10-09 18:00~20:00 2 工作日
    2017-10-10 18:00~20:00 2 工作日
    2017-10-13 18:00~19:00 1 工作日
    2017-10-14 10:00~18:00 8 双休日
    2017-10-15 14:00~18:00 4 双休日
    2017-10-21 09:00~21:00 12 双休日
    2017-10-22 09:00~18:00 9 双休日
AR投影端
    兑换提示：
        如果积分大于最小可兑换积分，则弹出最接近的可兑换积分对应礼品的提示：“恭喜您获得XXX礼品，请查看手机微信玩家端的获奖信息，并去前台兑换礼品”
        如果积分小于最小可兑换积分，则弹出“您还差多少分就可以兑换XXX（最小积分的）礼品”
AR商家端
    支持商家配置游戏参数
        积分
AR玩家端
    游戏每一局结束弹出推送，基于积分的推送（游戏投影屏幕和玩家端（以消息推送方式提醒玩家））
    确定能否基于个人玩家频繁弹出推送消息，微信有没有什么限制
        已确认：个人推送微信不支持，只支持每月4条的群发推送。
    开发礼品券充值功能，在充值界面增加通过礼品券充值的充值方式。
AR管理端
    {2017-10-13} 与外包方确定的修改及需要完善内容
        考虑商家转账细节（有可能会设计到新增一套商家转账页面）,不确定微信能否自动转账出去
        全局修改
            //调整首页导航栏按钮的顺序
            //修改首页导航栏俺就图标
            //去掉每个列表前面的多选框
            //所有的删除均为逻辑删除
            //在数据库中关联玩家ID与微信openID
            //去掉每个列表的自定义列表项
            //确定每个列表中必要的排序
            //去掉每个页面的刷新
            //删除所有时间过滤和按账期
            //所有列表页都做翻页
            //关键操作加提示文字，并需要最高权限
            //修改所有文本框的提示语
            //检查所有必填项
            //将用户的权限表修改为更好的描述方式
            //更新选择关系依赖表
            //更新此次修改内容列表
            //ID划分
                //商家 100000000
                //玩家 200000000
                //店面 300000000
                //产品 400000000
                //设备 500000000
                //成就 600000000
                //礼品 700000000
                //消息 800000000
                //活动 900000000
                //用户 000000000
        //商家管理
            //创建商家
                //改为与商家编辑的内容一致，除了
                    //去掉商家微信号
                    //修改按钮改为创建商家
                    //去掉所有可填入内容
            //商家信息
                //新增商家资金账户
                //转账途径为直达商家，则不能设置分成比例
                //去掉手动汇款列表项
                //修改商家名称输入框提示文字
                //创建商家的时候使用用户的手机号代替玩家ID
                //去掉商家分成比例设置，现阶段随意读取任意次商家设备的分成比例
            //店面信息
                //去掉创建店面
            //账单信息
                //当前商家所有未结款金额
                //显示手动结清所有未结款按钮
                //账单流水列表
                    //查询功能
                    //交易日期
                    //摘要
                    //玩家ID
                    //结算日期
                    //店面信息
                    //设备信息
                    //交易日期
                    //摘要
                    //玩家ID
                    //玩家支付
                    //收入
                    //商家分成
                    //分成金额
                    //结算日期
                    //手续费
                    //店面信息
                    //设备信息
                    //操作
                        //手动转款按钮        
            //礼品信息
                //礼品列表
                    //礼品图片
                    //礼品ID
                    //礼品名称
                    //商家发放量
                    //兑换积分
                    //礼品备注
                    //删除礼品
                    //添加礼品按钮
                        //礼品ID
                        //兑换积分
                    //修改礼品按纽
                        //礼品ID
                        //兑换积分
            //经营者
                //创建经营者
                    //玩家ID
                    //名称
                    //联系电话
                    //身份
                    //创建经营者按钮
                //经营者列表
                    //玩家ID
                    //微信号
                    //名称
                    //联系电话
                    //身份
                    //操作
                        //删除
                        //创建
                        //编辑
                //设置商家管理人员权限（商家法人、商家店员、商家管理员、玩家）
                    //商家法人拥有最高权限，一旦创建不能更换，不能降级
                    //商家管理员也拥有最高权限，管理员可以创建多个，可以更换身份
                    //商家店员只有部分权限，可以创建多个，可以更换身份
                    //一旦将商家店员和商家管理员删除，那么他会降级为玩家，同时将失去进入商家端的权限
                    //目前这三者角色在商家端是没有权限区别的，目的是实现多个人管理一个商家的目的，并为后期提供扩展。
            //二维码
                //商家二维码显示
                //选择单台设备
                //打印二维码
        //设备管理
            //列表
                //设备ID                
                //产品ID
                //产品名称
                //所属店面ID
                //所属店面名称
                //商家设备分成比例
                //操作
                    //编辑
                    //删除
            //查询
                //设备ID
                //产品ID
                //产品名称
                //店面ID
            //创建设备
                //设备ID                
                //产品ID (产品名称)
                //所属店面ID (所属店面名称)
                //商家设备分成比例
            //修改设备
                //设备ID                
                //产品ID (产品名称)
                //所属店面ID (所属店面名称)
                //商家设备分成比例          
        //玩家管理
            //如果玩家被冻结，在进入游戏中心的时候，显示冻结提示静态页面
            //去掉玩家二维码列
            //去掉玩家跳转商家
            //资金流转：三方扣费》点券到账》童游到账》商家到账
        //店面管理
            //删除店面管理-设备列表中的游戏版本列
            //删除店面管理-设备列表中的游戏名称列
            //店面编辑-产品列表 改为 设备列表
            //去掉设备列表中的上线功能
        //产品管理
            //查询
                //产品ID
                //产品名称
            //去掉所有产品版本号的内容
            //产品列表的实例数量改为设备已售数量
            //将产品列表的删除改为停用
            //去掉产品分成比例
        //成就管理
            //删除成就图标，包含编辑页、创建页、列表
        //礼品管理
            //礼品列表
                //礼品ID
                //礼品图片
                //礼品名称
                //发放总量
                //礼品备注
                //礼品编辑
                //礼品禁用            
            //礼品查询
                //礼品ID
                //礼品名称
                //搜索
            //创建礼品
                //礼品ID
                //礼品名称
                //礼品图片
                //选择图片
                //礼品备注
                //创建礼品
        //活动管理
            //活动列表
                //活动ID
                //活动模板
                //起始日期
                //终止日期
                //针对商家
                //赠品数量
                //活动状态
                //限制人数
                //参与人数
                //操作
                    //删除
                    //编辑
            //活动查询
                //活动ID
                //活动名称
            //创建活动
                //活动ID
                //活动模板
                //活动描述
                //起始日期
                //终止日期
                //活动范围
                    //所有商家
                    //指定商家
                //商家ID
                //赠品数量
                //限制人数
            //活动编辑
                //活动ID（显示）
                //活动模板
                //活动描述
                //起始日期
                //终止日期
                //活动范围
                    //所有商家
                    //指定商家
                //商家ID
                //赠品数量
                //限制人数       
    //创建店面的链接错误
    ｛2017-10-11｝版本修改内容
        商家[1]
            查
                //商家ID
                //商家名称
                //联系人
                //联系电话
            增、改
                //联系人输入提示文字“长度限制为1-20个字符”
                //联系电话输入提示文字“长度为11个字符，只允许包含数字”        
                //设置两种转账途径（直达商家、童游中转）
                //设置两种汇款方式（自动汇款，手动汇款）
                //设置三种结算时长（即时结算，日结，月结）  
                //设置分成比例（如果商家的到账方式设置为“直达商家”，那么使用针对商家的分成比例）
                //将商家店面设置独立一个选项卡
                //标记必填字段
                //做表，根据到账途径决定汇款方式，根据汇款方式决定结算时长
        玩家[2]
            查
                //玩家ID
                //玩家名称
                //联系电话
                //身份
        店面[3]
            增、改
                //制作创建店面页面
                //新增产品增加一个输入框
                //标记必填字段
            查
                //店面ID
                //店面名称
                //所属商家
                //联系人
                //联系电话
        产品[4]
            增、改
                //标记必填字段
                //设置分成比例（如果商家的到账方式设置为“童游中转”，那么使用针对设备的分成比例）
        用户[5]
            增
                //用户ID（自动生成）
                //用户名
                //联系电话
                //邮件
                //用户类别（目前系统内置3种权限分组（管理员、用户、访客），不做自定义分租）
                //做表，功能权限表(把所有功能列出来，确认访问权限)
            删
                //删除用户
            改
                //同增（但不能修改用户ID）
            查
                //按用户ID查询
                //按用户名查询         
        成就[6]
            增
                //成就ID
                //成就名称
                //游戏ID
                //游戏名称
                //成就分值
                //成就图标
                //成就逻辑
                    //成就作用域(当前局内,当前场景,全部游戏)
                    //成就类型(获得,消费,兑换,捕获,翻转)
                    //成就实例(积分,卡包,金币,所有动物,五彩牦牛,猛犸象,马鹿,雪豹,牦牛,猞猁,藏羚羊,熊,岩羊,野驴,车)
                    //成就逻辑（<=>）
                    //成就达成值
                    //做表，根据成就的逻辑类型决定成就逻辑的实例项
            改
                //修改成就名称
                //修改游戏ID
                //修改成就分值
                //修改成就图标
                //修改成就达成值
            查
                //根据成就ID查询
                //根据成就名称查询
        消息[8]
            问题
                自己做的消息不能主动弹出，所以应该使用微信公众平台的消息群发。
                让商家自己编辑消息群发开发难度较大，
                    在商家端开发一个移动版的对应微信公众平台消息群发功能的编辑模块；
                    然后再将商家编辑好的消息传送给商家端；
                    再由商家端对接微信公众平台消息群发接口实现消息群发。
                管理端似乎没有必要做消息群发，因为我们能够使用自己的微信公众平台来做消息群发。 
                微信公众平台的消息群发每个月只能发4条，我们帮助商家编辑消息群发，工作量不会有多大。反而让所有商家自主向我们不断推送他们想要发送的消息，会更加不好管理。
            功能列表
                选择群发对象
                    全部用户
                    按照标签选择
                性别
                    全部
                    男
                    女
                群发地区
                    全部
                    ...
                新建图文消息
                从素材库中选择
                预览
                群发
                    定时群发
                    天 时 分 （定时群发）

            先设计一个活动页面，这个活动是一个固定板式的，然后需要考虑改变这个页面的那些部分
            页面头部图片
            充值活动列表
            活动内容文字描述
AR玩偶供应商
    河南晶舟毛绒玩具(广州市荔湾区好新情玩具行)
        雪豹报价{2017-07-20}
            尺寸:300*250 mm
            数量:1000 个
            面料:水晶超柔
            填充:pp棉
            商标:无
            吊牌:不含
            胶袋:
            纸箱:
            价格:￥17.00
            订金:
            出货:
            打样:￥600.00
            退样:3000 个
            税点:11 点
            货期:20 天
            起订量 500 个
    东莞市逸萌玩具制品有限公司 
        https://yimengwj08.1688.com/?spm=a2615.7691479.0.0.5a1c50bPPCFdW
        E-mail:ymwj0707@163.com
        QQ:2152677780
        旺旺:逸萌玩具02
        手机:18188839662
        联系人:付欣
        地址:东莞市茶山镇卢屋第二工业区 
        雪豹报价{2017-10-16}
            尺寸:300*250 mm
            数量:1000 个
            面料:水晶超柔
            填充:pp棉
            商标:无
            吊牌:不含
            胶袋:PE
            纸箱:A=B
            价格:￥15.20
            订金:30%
            出货:70%
            打样:￥500.00
            退样:2000 个
            税点:11 点
            货期:25 天/1000 pcs
            起订量 1000 个
    扬州市勾勾手玩具有限公司
        https://detail.1688.com/offer/542627068725.html?spm=a312h.7841636.1998813769.d_pic_25.xFxMGq&tracelog=p4p
        地址:扬州市仪征市陈集镇大房村村委会旁 扬州市勾勾手玩具有限公司（不到的快递可放置高集圆通代理点）    
        联系人:吴佳佳
        手机:13773491298
        tel:0514-85597406
        雪豹报价{2017-10-16}
            尺寸:300*250 mm
            数量:1000 个
            面料:
            填充:
            商标:
            吊牌:
            胶袋:
            纸箱:
            价格:￥19.80
            订金:
            出货:
            打样:
            退样:1000 pcs & ￥10000.00
            税点:
            货期:
            起订量 500 个  
    东莞市源康毛绒玩具有限公司
        http://www.yk2008china.com
        E-mail：yk011@yk2008china.com  
        地址:东莞市寮步镇竹园元英路10号    
        联系人:冯小姐
        手机:13926865681
        QQ:2880260057
        tel:
        雪豹报价{2017-10-16}
            尺寸:300*250 mm
            数量:1000 个
            面料:水晶超柔
            填充:pp棉
            商标:1 个
            吊牌:不含
            胶袋:OPP
            彩盒:无
            纸箱:A=B
            价格:￥22.00
            订金:30%
            出货:70%
            打样:￥500.00
            退样:5000 pcs
            税点:10 点
            货期:45 天/1000 pcs
            起订量 500 个
    广东艺贝玩具制品有限公司
        https://detail.1688.com/offer/542064462791.html?spm=a312h.7841636.1998813769.d_pic_26.xFxMGq&tracelog=p4p
        E-mail：
        地址: 
        联系人:
        手机:
        QQ:
        tel:
        雪豹报价{2017-10-16}
            尺寸:300*250 mm
            数量:1000 个
            面料:水晶超柔
            填充:pp棉
            商标:无
            吊牌:不含
            胶袋:
            彩盒:无
            纸箱:
            价格:￥
            订金:
            出货:
            打样:
            退样: pcs & ￥
            税点:
            货期:
            起订量 500 个                     
AR运营定价
    成本均摊参数
        预定销售数量 10 套
        产品销售版本 2 种
        合作时间 3~6 个月 根据客户的客流量来确定浮动范围
        分成比例 30%~50% 如果客户要拿少的分成比例，那么合约时间就要加长，反之...
    标准版
        成本
            硬件成本
                地台 3 * 
                投影
                集成箱
                主机
                kinext 2.0
                扫码器 3 * 
                路由器
                音响
            礼品成本
                玩偶成本
                卡牌成本
            开发成本
                自研成本
                    2017-07 ~ 2017-11 4个月
                    参与人数 4.5 人
                    平均人员单价 8000/月
                    4 * 4.5 * 8000 = 144000.00
                外包成本
                    运营系统 60000
            运营成本
                服务器空间及带宽
                客服人员
            安装售后成本
        定价
            首付款模式 总价 48800 首付款 23000 ~ 25000 分成比例？ 单次价格？ 回款后 分成比例？ 客流量达到多少？合作运营的是时间？
                合作模式：客户违约，押金不退，设备收回（如何回收设备？）
                首推此种模式
                关闭线下充值通道，不让客户接触现金
                关闭断网进行游戏的功能
                如果客户违约，如何让游戏不能运行？
                定价成本包含那些类型的成本？
            保证金模式
                合作模式：客户违约，保证金退还，设备收回，补齐成本（包含哪几部分成本？）
                次推此种模式
            出售模式  总价  48800 分成比例？
                采用什么形式合作？
    投币版
        定价
            投币版中包含那些合作模式？    

NOTE//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

AR游戏营销ppt修改
AR游戏寻找礼品供应商
运营系统中活动及消息设计
项目后期计划会议+精灵项目会议

上海出差
    行程
        {2017-10-19} 出发
            15:25 大连周水子几场 MF8058 上海浦东机场T2 厦门航空 17:25
        {2017-10-20} 参加上海展会
            17:09 上海虹桥站 G1363 义乌站 18:53
            锦江之星(义乌店)
        {2017-10-21} 走访义乌国际商贸城
        {2017-10-22} 回大连
            13:18 义乌站 G7334 上海虹桥站 15:08
            15:08 去小峰哥家 16:30
            17:30 去浦东机场 19:10
            20:40 上海浦东机场T2 CA8954 大连周水子机场 中国国航 22:45
            23:00 回小平岛 23:40
        {2017-10-23} 去山西
            09:08 大连站 D31 北京站 15:12
            15:40 到六里桥客运站 大同 20:00
            20:00 到大同第四人民医院 20:30
    目的
        考察上海展
        考察小商品市场
    报销
        机票
            750 上海浦东 CA8954 大连周水子   柒佰叁拾圆
        酒店
            249 锦江之星(义乌店) 20日
            249 锦江之星(义乌店) 21日
        礼品 680 展会活动礼品
        车费 
            41 小平岛 出租车 大连周水子机场
            16 上海浦东机场T2 机场大巴 上南路/华夏西路
            53 上南路/华夏西路 出租车 上海世博展览馆
            54 机场-小平岛
            14 义乌市内
            11 义乌市内
        高铁 
            120 上海虹桥站 G1363 义乌站
            120 义乌站 G7334 上海虹桥站
        庄河
            120 过路费
            100 92号汽油

    这次展会的感想和印象深刻的内容
        研发创新产品的步骤
            要么跟着别人的成功经验走：模仿、借鉴、换皮、微创新
            要么制定合理的研发的流程：立项草案->技术评估->概念设计->专业调研->可玩性Demo->市场投放反馈->正式立项->启动开发
            在开发过程中，要以用户体验为首要目标，而不是丰富系统内容和完成功能。也就是说如果用户体验做的不到位，就不能做下一个功能系统。
            在我们这类游戏中，不应该考虑通过系统内容和数值养成来增加产品粘性，而应该通过良好的用户体验和简洁明了的可玩性或博彩性提升用户对产品关注度。

        无论是程序还是策划，我们对 Kinext 体感技术的了解和掌握还远远不够
            所以我们对 Kinext 擅长做什么，不能做什么比较模糊。这方面如果与立项的初衷产生了矛盾，启动研发就是非常致命的错误。
                比如：如果Kinext对识别精度的要求远远小于我们的预期，那么三人站位就受到了条件限制，而不能实现。 
                比如：策划以什么标准定义一个合理的动作逻辑表述方式。这方面就影响到用户的操作体验。
                比如：程序如何实现基于 Kinext 获取的数据和策划提出的多种不同但又类似的手势逻辑表述，做出动作识别的模糊算法。
                比如：Kinext 能达到什么样的识别精度和识别频率。等等
                这些都需要在技术评估阶段制定可以量化的标准和规范文档。

        AR 游戏的重点改进项
            Kinext 识别手势误差
                手势识别在不同距离不同高度，有较大的精度误差，导致不同场地或不同高度的人玩游戏时产生完全不同的结果。
                我们原来只考虑了能否识别到，并没有考虑识别准确性的范围，作为游戏的最佳识别区域。
                《kinext大冒险》有这方面考虑，kinext识别区域是硬件标准，但在硬件标准之内，《kinext大冒险》又限定了一个最佳识别区域。作为最佳识别体验的第二层保护。
                解决方案
                    需要根据地台距离和手势高度来测试 Kinext 的识别精度，来大致确定一个可接受的范围。
                    在程序方面针对这个大致的范围做一些距离和高度的优化，根据优化结果确定一个较为准确的识别范围和高度。
                    根据上一步优化出的距离和高度范围，确定 kinext 的高度和地台距墙面的距离，作为产品的安装要求。并在玩家超出这个识别区域时，在游戏中加以提示。
                    不排除因识别距离太小而无法满足三人站位距离的要求。而导致产品对人数的重新评估。       
            手势模糊识别：不同的用户在玩游戏时对拉拽动物和抛绳子的动作都有不同的理解和表现。 导致我们的简单的手势判定逻辑无法识别大部分用户的手势。
                解决方案：需要提炼用户的多种手势行为，并做分析和逻辑表述，以便程序可以开发兼容多种相似手势的模糊算法。
            难度问题：由于前两个问题，玩家会人认为我们游戏的难度较高，动物不好套，反映不灵敏等，但这写都不是问题的根源，我们还是要从根本上解决问题。
                解决方案：先解决前两个问题，再去优化难度，让游戏难度在上手时不设门槛，然后从中间开始循序渐进。具体的方案还需要制定一个可以量化的标准。
            没有发挥体感游戏的优势：人物动作在表现上不够明显，动作触发的事件比较少，对动作标准的要求较高。
                解决方案
                    体感游戏应该能够比较明显且流畅自如的表达玩家的任何动作，并且不应该出现胳膊打弯等bug、身体扭曲等Bug
                    当玩家在做出我们动作库中的动作的时候都可以触发一些事件，即便是一些小特效或小文字，这样可以丰富游戏的动作反馈，从而提升用户的体验。
                    这些动作不能是强制性的要求玩家一定要学习，一定要在某些条件下做出某些动作。而应该是比较随机和自由的非线性设计。

        其他方面
            跳伞VR游戏的视觉体验之外还有重力体验。重力体验是其亮点，优势比较突出，但也有一些缺陷：售价 近90000；须专人负责，且工作量巨大；游戏设计有些问题。
            狩猎产品硬件做的非常真实，硬件体验是其亮点，音效也做的不错，而且亮点优势突出。
            我们AR游戏的亮点，“体感互动“ 不太突出，相反由于上述种种原因在客户眼里变成了缺陷。
            不少客户比较关注设备的占地面积
            很多设备销售商比较重视回收数据，将产品在某地投放采集数据。如单次投币量均值，平日日流水，节假日日流水。
            箱式礼品柜的问题是需要不断维护礼品，有客户对钓鱼机+礼品柜的销售人员说“这样换礼品我不要累死！”
            喵呜以及一些国外公司产品形象包装比较好。
            娃娃机出现的各种变种：最强大脑娃娃机；小游戏娃娃机等等，且更新速度较快，说明技术性博彩的市场需求旺盛。也有其独立运营和占地面积小的优势。
    义乌市场
        卡牌 10万个袋子 0.11 元 300 克铜版纸
            义乌市黑桃A玩具厂
        毛绒玩具 驴 1000个 13元  10000个10.3元 工期20天/28天
            广东佛山玩具厂 

射箭游戏
    市面上射箭游戏存在的问题
        目标群体定位不够精准，专业用户定位不专业，大众玩家觉得没意思。
        解决方案
            调整定位，锁定大众玩家，吸引情侣、家庭，目标用户10岁以上。
            投影游戏内容的品质参考游戏大作的声、光效果，吸引大众眼球。
        场地安全问题，包括有意的、无意的，且有可能造成严重后果。
        解决方案
            互动投影技术 + 海绵箭头，自身具有安全的优势。
            测试海绵箭头全程距离击中人脸无大碍。
        弓箭对使用者的技巧要求较高，使用难度较大，较重，难拉，上手难度偏大，不利于大众化。
        解决方案
            弓箭外观选择要华丽美观，不落俗，品质优良，质感好的。
            同时可以考虑提供多样的武器选择：弓弩，弓箭，等
            武器的重量要适中，不能太轻，也不能太重，弓弦的力度不能太强。
        现有的射箭项目缺乏游戏性，没有目标，没有结果，没有粘性。
        解决方案
            射箭项目利用游戏内容包装，提升可玩性，游戏内设计明确的游戏目标。
            将游戏结果通过彩票形式实时反馈给玩家，让玩家每射中一个目标都会有即得感。
            对接现有场馆的积分系统，可以让玩家有一定的收益来刺激其再次消费。
    互动投影方案
        玩家在自己固定的射箭区域内射箭。(先行方案)
            每个区域单独一个游戏画面，画面大小相同。1 台投影覆盖 2 个区域。
            根据不同的区域，每个区域的玩家单独结算彩票。  
            每个玩家的射箭区域为 2米 ~ 2.5米。
        玩家在大屏幕上随意寻找目标。(升级方案)
            不分区，前方是一个超大的游戏画面。
            根据箭头识别不同玩家，实现混合射箭单据结算。
            每个玩家的射箭区域为 1.2米 ~ 1.5米。

精灵游戏
    核心玩法不明确
    针对的市场不明确
        教育类游戏考验玩家耐心，不适合在娱乐环境中投放



射箭游戏
    研发步骤
        技术实现
            箭的可识别
            精度误差
            投影仪方案
        设备体验
            弓箭手感
            射击感
            击中感
        商业化运营
            积分对接
            礼品对接

        游戏玩法
        产品美化、精细化
