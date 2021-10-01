'''
Finds duplicate value in linear time
'''
def duplicate(ar):
    val = dict()
    result = []
    for i in ar:
        if i in val:
            result.append(i)
        else:
            val[i] = True
    return result        

if __name__ == '__main__':
    ar = list(map(int, input('Enter numbers seperated by space: ').split(' ')))
    result = duplicate(ar)
    if len(result) == 0:
        print('No duplicate values present')
    else:
        print('Duplicate values = ', end='')
        for i in result:
            print(i, end=' ')
