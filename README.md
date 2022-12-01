# cpp_group_data
This repo handles grouping containers of data in an efficient manner. 

Note that this is a new type of data manipulation for my work. 
As such, there is no guarantee that it will suit any application you are after. 

The current thoughts are that the group_by function should be O(n) (calculated in a single loop, irrespective of the number of loops). 
I think this is very achievable using expression templates for example. 
