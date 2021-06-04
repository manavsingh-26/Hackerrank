def count_substring(string, sub_string):
    count = 0
    for a  in range(0,len(string)):
        if string[a:len(sub_string)+a] == sub_string:
            count+=1
        
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
