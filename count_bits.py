def count_bits(n):
    return bin(n).count("1")
    
count_bits(4)

## Alternative solution:
def count_bits2(n):
    ret = 0
    while n:
        ret += n & 1  # n = 4, 1 = 1
        # 100
        # 001
        #   & operator: if both bits are 1, result is 1. Just like 'and' in logic
        # 000 = result
        n >>= 1
    print(ret)


count_bits(4)
count_bits2(4)

#both return 1
