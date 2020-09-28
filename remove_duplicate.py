def rem_dup(arr, n): 
       
    mp = {i : 0 for i in arr} 
      
    for i in range(n): 
          
        if mp[arr[i]] == 0: 
            print(arr[i], end = " ") 
            mp[arr[i]] = 1
  
arr = [15,12,13,15,23,15 ] 
# length 
n = len(arr) 
rem_dup(arr,n) 