#ifndef GROUP_BY_HPP
#define GROUP_BY_HPP
/**
 * @file group_by.hpp
 * @author Eamon Conway (conway.e@wehi.edu.au)
 * @brief This function is for grouping data. 
 * @details The group_by function in Rstudio is obviously very helpful for parsing data. I would like to have similar ability in C++. This could help with aggregating data before the post-processing stage and may lead to reduced storage costs. 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <map>



template <typename DATA, typename GROUP>
auto group_by(const DATA& input, const GROUP& lambda){
  using key = decltype(lambda(*input.begin()));  
  // using type = typename DATA::value_type;
  using type = DATA;
  
  // This function will take in a container of data and turn it into a grouped container of data. 
  std::map<key, type> grouped_data;
  for(auto value : input){
    grouped_data[lambda(value)].emplace_back(value);
  }
  
  return grouped_data;
};
#endif