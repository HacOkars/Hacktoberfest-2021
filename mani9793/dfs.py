#tree creation
adj_list= {
    "A":["B","C"],
    "B":["D","E"],
    "C":["B","F"],
    "D":["E"],
    "E":["F"],
    "F":["G"],
    "G":["H","I"],
    "H":["I","J"],
    "I":["J","K"],
    "J":["K"],
    "K":["L"],
    "L":["M"],
    "M":["N","O"],
    "N":["O"],
    "O":["P"],
    "P":[]
    
}

color = {} #White,Gray,Black

#W=unvisited, G=current visiting,  B= visited

parent = {}   
dfs_traversal_output = []

#initialize all as unvisited
for node in adj_list.keys():
    color[node] = "W"
    parent[node] = None
#algo start

def dfs_util(u): #u=rootnode
    color[u] = "G"
    dfs_traversal_output.append(u)
    for v in adj_list[u]:
        if color[v]  == "W": #if unvisited color=w
            parent[v] = u     
            dfs_util(v)  #recursive call
            
    color[u] = "B" #visited
   #algo end    

dfs_util("A") #function call
print(dfs_traversal_output)
print(color)
print(parent)
'''
target_key = input("enter target key : ")
if target_key in dfs_traversal_output:
        print("SUCCESS")
else:
        print("FAIL")
'''
