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


### note point



### code
    ''' get data form file '''
    path = "D:\\dirname\\filename.txt"          # save directory path
    path = "D:/dirname/filename.txt"            # another way to save directory path 
    open(path).readline()                       # open a file hander and read a line

    ''' Convert JSON string to directory '''
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
    form pandas import DataFrame, Series
    import pandas as pd
    import numpy as np
    # -------------------------------------     
    frame = DataFrame(records)                  # creat DataFrame Series
    frame['tz'][:10]                            # return top 10 Series object for 'tz' key
    tz_counts = frame['tz'].value_counts()      # Series object has a value_count() method, return the 'tz' value and count
    tz_counts[:10]                              # slices top 10 of 'tz'
    # -------------------------------------
    clean_tz = frame['tz'].fillna('Missing')    # 'na' is replace by 'Missing'
    clean_tz = [clean_tz == ''] = 'Unknown'     # Use 'Unknown' to replace ''
    tz_counts = clean_tz.value_count()          # generate 'tz' value and count
    tz_counts[:10]                              # slices top 10 of 'tz'
    # -------------------------------------
    %pylab                                      # open in pylab mode
    tz_counts[:10].plot(kind='barh', rot=0)     # open and draw a barh 

