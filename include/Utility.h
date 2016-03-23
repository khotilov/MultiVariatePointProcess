#ifndef UTILITY_H
#define UTILITY_H
#include "Process.h"
#include <string>
#include <vector>
#include <Eigen/Dense>



// constexpr unsigned int string2int(const char *str, int h = 0)
// {
//     // Hash function
//     return !str[h] ? 5381 : (string2int(str, h+1)*33) ^ str[h];
// }


void ImportFromExistingCascades(const std::string& filename, const unsigned& number_of_nodes, const double& T, std::vector<Sequence>& data);

void ImportFromExistingUserItemSequences(const std::string& filename, const unsigned& num_users, const unsigned& num_items, std::vector<Sequence>& data);

std::vector<std::string> SeperateLineWordsVector(const std::string &lineStr, const std::string& splitter);

void LoadEigenMatrixFromTxt(const std::string& filename, const unsigned& num_rows, const unsigned& num_cols, Eigen::MatrixXd& mat);


#endif