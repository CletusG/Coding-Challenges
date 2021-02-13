def filter_list(l):
    final = []
    for i in l:
        if isinstance(i, int):
            final.append(i)
    return final # need to use 'return' for code wars otherwise it counts as wrong
    #print(final)


filter_list([1, 2, 'a', 'b', 3, 45])
