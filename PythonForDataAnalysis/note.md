### about Python
    大多数软件都是由两部分代码组成的：少量需要占用大部分执行时间的代码，以及大量不经常执行的“粘合剂代码”
    粘合剂代码的执行时间通常是微不足道的。开发人员的精力几乎都是花在优化计算瓶颈上面的，有时更是直接转用更低级的语言（比如C）。
    Python 不仅适用于研究和原型构建，同时也适用于构建生产系统。
    Python 不适合要求延迟非常小的应用程序(如高频交易系统)，以及高并发、多线程的应用程序。因为 Python 有全局解释器锁（Global Interpreter Lock, GIL）


### The book purpos
    与外界进行交互：读写各种各样的文件格式和数据库
    准备：对数据进行清理、休整、整合、规范化、重塑、切片切块、变形等处理以便进行分析。
    转换：对数据集做一些数学和统计运算以产生新的数据集。
    建模和计算：将数据跟统计模型、机器学习算法或其他计算工具联系起来。
    展示：创建交互式的或静态的图片或文字摘要。


### Terminology
    structured data                             # 结构化数据
    column-oriented                             # 面向列
    panel data                                  # 面板数据，这是计量经济学中有关多维结构化数据集的一个术语。
    Munge/Munging/Wrangling                     # 数据规整
    Pesudocode                                  # 伪码
    Syntactic sugar                             # 语法糖
    JSON(JavaScript Object Notation)            #一种常用的 Web 数据格式
    list comprehension                          # 列表推倒式，这是一种在一组字符串(或一组别的对象)上执行一条相同的操作(如 json.loads)的简洁方式。
    summary view                                # 摘要试图，主要用于显示较大的 DataFrame 对象。


### important Python libraries & distribution
    Anaconda                                    # 一个用于科学计算的Python发行版，提供了包管理与环境管理的功能。
    Enthought Canopy(原来叫EDF)                 # 科学学计算 Python 安装包。一个集成的IDE，包含了众多科学计算库。
    IPython                                     # Python 科学计算标准工具集的组成部分，它将其他所有东西联系到了一起。
    NumPy(Numerical Python)                     # 科学计算的基础包。
    Pandas(panel data & Python data analysis)   # 使我们能够快速便捷地处理结构化数据的大量数据结构和函数。
    matpoltlib                                  # 是最流行的用于绘制数据库图表的 Python 库。它和 IPython 结合的很好。
    SciPy                                       # 是一组专门解决科学计算中各种标准问题域的包的集合。


### collections
    namedtuple      # namedtuple可以很方便地定义一种数据类型，它具备tuple的不变性，又可以根据属性来引用。
    deque           # list是线性存储，数据量大的时候，插入和删除效率很低。deque是为了高效实现插入和删除操作的双向列表，适合用于队列和栈。
    defaultdict     # 使用dict时，如果引用的Key不存在，就会抛出KeyError。如果希望key不存在时，返回一个默认值，就可以用defaultdict。
    OrderedDict     # 使用dict时，Key是无序的。在对dict做迭代时，我们无法确定Key的顺序。OrderedDict的Key会按照插入的顺序排列，不是Key本身排序。
    Counter         # 是一个简单的计数器，例如，统计字符出现的个数


### IPython
    about IPython
        execute explore & edit-complie-run
        输出的可读性更好，和 print 的普通输出形式有着显著区别。
        IPython 和主流编辑器、IDE 之间的交互。
        我们非常有必要了解 Python 标准库、NumPy、pands 以及本书中所用到的其他库的性能特点。在大型数据分析应用程序中，这些不起眼的毫秒数是会不断累积的。
    Tab 
        当前命名空间中任何与已输入的字符串相匹配的变量（对象、函数）都会被找出来。
        甚至是文件路径（/）
        函数关键字参数
    object introspection (内省)
        在对象前面或后面加上一个 ？ 就可以将有关该对象的一些通用信息显示出来。
        如果该对象是一个函数或实例方法，则其 docstring (如果有的话) 也会被显示出来。使用 ?? 还将显示其源代码。
        ? 还可以搜索 IPhone 命名空间，再配以通配符 * 即可显示出所有与之相匹配的名称。
    Execute the code in the clipboard
        使用 Ctrl-V 的方式粘贴代码是模拟在 Python 中逐行输入代码，换行符会被处理为 <return> ，我们应该使用 %paste 或 %cpaste 这两个魔术函数。
        %paste 可以承载剪贴板中的一切文本，并在 shell 中以整体形式自动执行。
        %cpaste 在最终执行之前，想粘贴多少代码就粘贴多少。最终使用 -- 加回车，以整体形式手动执行。Ctrl-C 可以终止 %cpaste 提示符。
    Shortcuts
        Ctrl-P 或上箭头     # 向后搜索历史中以当前输入的文本开头的命令
        Ctrl-N 或下箭头     # 向前搜索历史中以当前输入的文本开头的命令
        Ctrl-R              # 按行读取的方向历史搜索（部分匹配）
        Ctrl-V              # 从剪贴板粘贴文本
        Ctrl-C              # 终止当前正在执行的代码
        Ctrl-A              # 将光标移动到行首
        Ctrl-E              # 将光标移动到行尾
        Ctrl-K              # 删除光标从开始至行尾的文本
        Ctrl-U              # 清楚当前行的所有文本
        Ctrl-F              # 将光标向前移动一个字符
        Ctrl-B              # 将光标向后移动一个字符
        Ctrl-L              # 清屏
    %run
        脚本是在一个命名空间中运行的，所以其行为应在跟在标准命令环境中执行时一样。此后，该文件中定义的全部变量就可以在当前 IPython shell 中访问了。
        如果希望脚本能够访问在交互式 IPython 命名空间(interactive)中定义的变量，就应该使用 %run -i
        任何代码在执行时，只要按下"Ctrl-C"，就会引发一个 KeyboardInterrupt。除一些非常特殊的情况之外，绝大部分 Python 程序都将立即停止执行。
        当 Python 代码已经调用了某个已编译的扩展模块时，"Ctrl-C"将无法立即停止执行。要么等待 Python 解释器重获控制权，要么只能任务管理器强制终止。
    Exception and trace
        如果 %run 发生了异常，IPython 默认会输出整个调用traceback(栈跟踪)，其中还会附上调用栈各点附近的上下文参考。
        %xmode 可以控制上下文代码参考的数量。
        post-mortem debugging (事后调试)
    Magic Command
        ?           # See the help
        %quickref   # Show a quick reference sheet
        %magic      # Pint information about the magic function system
        %debug      # Activate the interactive debugger.
        %hist       # Alias for '%history'.
        %pdb        # Control the automatic calling of the pdb intercative debugger.
        %paste      # Paste & execute a pre-formatted code block from clipboard.
        %cpaste     # Paste & execute a pre-formatted code block from clipboard.
        %reset      # Resets the namescape by removing all names defined by the user.
        %page       # Pretty print the objet and display it through a pager.
        %run        # Run the named file inside IPython as a program.
        %who        # Print all interactive variables, with some minimal formatting.
        %whos       # Like %who, but gives some extra information about each variable.
        %xdel       # Delete a variable, trying to clear it from anywhere that.
        %logstart   # logging anywhere in a session
        %logoff
        %logon
        %logstate
        %logstop
    GUI console based on QT
        ipython qtconsole --pylab=inline
    matpoltlib & pylab mode
        标准 Python shell 中创建一个 matplotlib，GUI的事件循环会接管 Python 会话的控制权。
        ipython --pylab 标记来集成 matplotlib
    搜索并重用历史命令
        只需要很少的按键次数即可搜索、自动完成并执行之前已经执行过的命令。
        在会话间持久化命令历史。
        将输入、输出历史记录到日志文件。
    输入和输出变量
        Ipython 会将输入和输出的引用保存在一些特殊的变量中。最近两个输出结果分别保存在 _ 和 __ 中。
        _27 第27行的输出变量
        _i27 第27行的输入变量，由于输入变量是字符串，因此可以用 exec 关键字重新执行。
        在处理非常大的数据集时，一定要注意 IPython 的输入输出历史，它会导致所有的对象引用都无法被垃圾收集器处理（即施放内存），对于这种情况，谨慎地使用 %xdel 和 %reset 将有助于避免出现内存方面的问题。
    与操作系统交互
        在 IPython 中，以感叹号开头的命令行表示气候的所有内容需要在系统 shell 中执行。
        将 shell 命令的控制台输出存放到变量中： ip_info = !ipconfig
        使用当前环境中定义的 Python 值。 只需在变量名钱加上 $ 即可： ！ls $var_name
        !cmd                # Run cells with cmd in a subprocess.
        output = !cmd args
        %alias
        %bookmark           # Manage IPython's bookmark system. 与别名的区别在于，他们会被自动持久化。
            %bookmark-l     # list all bookmarks 
        %cd
        %pwd
        %pushd
        %popd
        %dirs
        %dhist
        %env
        %alias              # Define an alias for a system command.
    交互式调试器
        调试代码的最佳时机就是错误刚刚发生时。在发生异常之后马上输入 %debug 命令，将会调用事后调试器，并直接跳转到引发异常的那个栈帧(stack frame)。
        要想精通这个交互式调试器，必须经过大量的实践才行。在 IPython 中调试程序往往会带来更高的生产率。
        输入 u(up) d(down) 即可在栈跟踪的各级别之间切换
        %pdb                # Contro the automatic calling of the pdb interactive debugger.
        (I)Python 调试器命令
            h(elp)          # 显示命令列表
            help            # 显示 command 的文档
            c(ontinue)      # 恢复程序的执行
            q(uit)          # 退出调试器，不再执行任何代码
            b(reak) [number]# 在当前文件的第 [number] 行设置一个断点
            b path/to/[file.py:number]   # 在指定文件的第 [number] 行设置一个断点
            s(tep)          # 单步进入函数调试
            n(ext)          # 执行当前行，并前进到当前级别的下一行
            u(p)/d(own)     # 在函数调用栈中向上或向下移动
            a(rgs)          # 显示当前函数的参数
            debug [statmenet]   # 在新的（递归）调试器中调用语句 [statment]
            l(ist) [statment]   # 显示当前行，以及当前栈级别上的上下文参考代码
            w(here)         # 打印当前位置的完整栈跟踪（包括上下文参考代码） 
        pdb.set_trace
    性能分析
        %time               # Time execution of a Python statement or expression.
        %timeit             # Time execution of a Python statement or expression. Many times to perform.
        %prun               # Run a statement through the python code profiler.
        $run -p
        %lprun
    IPython HTML Notebook
        基于 Web 技术的交互式计算文档格式。它已经称为一种非常棒的交互式计算工具，同时还是科研和教学的一种理想媒介。
        它有一种基于 JSON 的文档格式 .ipynb, 使你可以轻松分享代码、输出结果以及图片等内容。将 .ipynb 文件发布到网上以供所有人查阅。
        IPython Notebook 应用程序是一个运行于命令行上的轻量级服务器进程。
        ipython notebook --pylab=inline 可以启动 IPython Notebook 服务器。


### code
    ''' get data form file '''
    path = "D:\\dirname\\filename.txt"          # save directory path
    path = "D:/dirname/filename.txt"            # another way to save directory path
    open(path).readline()                       # open a file hander and read a line

    ''' Convert JSON string to directory '''
    import json
    records = [json.load(line) for line in open(path)]          # Iterating over an open file handle gets a sequence of rows。records is a list of dict.
    time_zone = [rec['tz'] for rec in records if 'tz' in rec]   # get time zone in list comprehension ,use if test to include 'tz' Key

    ''' counts '''
    def get_counts(sequence):
        counts = {}
        for x in sequence:
            if x in counts:
                counts[x] += 1
            else:
                counts[x] = 1
        return counts

    ''' counts concise version using standard libraries '''
    from collections import defaultdict
    def get_counts2(sequence):
        counts = defaultdict(int)               # all value will be initialized to 0
        for x in sequence:
            counts[x] += 1
        return counts

    ''' get top n time zone '''
    def top_counts(count_dict, n=10):
        value_key_pairs = [(count, tz) for tz, count in count_dict.items()]     # flip the key value of the dict and creat a list of tuple
        value_key_pairs.sort()                                                  # sort the list by tuple[0] -- a int value
        return value_key_pairs[-n:]                                             # The bottom n slices

    ''' get top 10 consise version using standard libraries '''
    from collections import Counter
    counts = Counter(time_zone)
    counts.most_common(10)

    ''' Count the time zone with pandas '''
    from pandas import DataFrame, Series
    import pandas as pd
    import numpy as np
    # -------------------------------------     
    frame = DataFrame(records)                  # creat DataFrame Series
    frame['tz'][:10]                            # return top 10 Series object for 'tz' key
    tz_counts = frame['tz'].value_counts()      # Series object has a value_count() method, return the 'tz' value and count
    tz_counts[:10]                              # slices top 10 of 'tz'
    # -------------------------------------
    clean_tz = frame['tz'].fillna('Missing')    # 'na' is replace by 'Missing'
    clean_tz[clean_tz == ''] = 'Unknown'     # Use 'Unknown' to replace ''
    tz_counts = clean_tz.value_count()          # generate 'tz' value and count
    tz_counts[:10]                              # slices top 10 of 'tz'
    # -------------------------------------
    %pylab                                      # open in pylab mode
    tz_counts[:10].plot(kind='barh', rot=0)     # open and draw a barh 

