def completion_table(data, separators = '|', column = 4):
    table = []
    for line in data:
        list_line = line.split(separators,column)
        if len(list_line) == column:
            table.append(line)
        elif len(list_line) < column:
            table.append(line+separators*(column-len(list_line)))
        else:
            table.append(line[0:len(line)-len(list_line[-1])-len(separators)])
    return [row.split('|', 3) for row in table]


path = './ps_command.md'
data = [line.rstrip().replace(' ', '').replace('\t', '') for line in open(path).readlines()]
table = completion_table(data)
#alias, name, example, note =