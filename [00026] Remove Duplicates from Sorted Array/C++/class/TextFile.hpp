#include <fstream>
#include "library/Include.hpp"

class TextFile
{
public:
    // Read from File =====================================================================================
    void readSingleValue(std::string filename, int &targetValue)
    {
        std::ifstream in(filename);

        in >> targetValue;

        in.close();
    }
    void readVectorOfValue(std::string filename, std::vector<int> &targetVector)
    {
        std::ifstream in(filename);

        int temp;
        while (in.good())
        {
            in >> temp;
            targetVector.push_back(temp);
        }

        in.close();
    }
    void readVectorOfValue(std::string filename, std::vector<double> &targetVector)
    {
        std::ifstream in(filename);

        double temp;
        while (in.good())
        {
            in >> temp;
            targetVector.push_back(temp);
        }

        in.close();
    }

    void readSingleChar(std::string filename, char &targetChar)
    {
        std::ifstream in(filename);

        in >> targetChar;

        in.close();
    }
    void readVectorOfChar(std::string filename, std::vector<char> &targetVector)
    {
        std::ifstream in(filename);

        char temp;
        while (in.good())
        {
            in >> temp;
            targetVector.push_back(temp);
        }

        in.close();
    }

    void readSingleString(std::string filename, std::string &targetString)
    {
        std::ifstream in(filename);

        in >> targetString;

        in.close();
    }
    void readVectorOfString(std::string filename, std::vector<std::string> &targetVector)
    {
        std::ifstream in(filename);

        std::string temp;
        while (in.good())
        {
            in >> temp;
            targetVector.push_back(temp);
        }

        in.close();
    }

    // Write to File =====================================================================================
    void write(std::string filename, int outValue)
    {
        std::ofstream out(filename);

        out << outValue;

        out.close();
    }

    void write(std::string filename, char outChar)
    {
        std::ofstream out(filename);

        out << outChar;

        out.close();
    }

    void write(std::string filename, std::string outString)
    {
        std::ofstream out(filename);

        out << outString;

        out.close();
    }

    void write(std::string filename, std::vector<int> outVector)
    {
        std::ofstream out(filename);

        out << outVector[0]  << "\n";
        for (int i = 1; i <= outVector[0]; i++)
        {
            out << outVector[i] << " ";
        }

        out.close();
    }

    void write(std::string filename, std::vector<double> outVector)
    {
        std::ofstream out(filename);

        for (int i = 0; i < outVector.size(); i++)
        {
            out << outVector[i] << " ";
        }

        out.close();
    }

    void write(std::string filename, std::vector<char> outVector)
    {
        std::ofstream out(filename);

        for (int i = 0; i < outVector.size(); i++)
        {
            out << outVector[i] << " ";
        }

        out.close();
    }

    void write(std::string filename, std::vector<std::string> outVector)
    {
        std::ofstream out(filename);

        for (int i = 0; i < outVector.size(); i++)
        {
            out << outVector[i] << "\n";
        }

        out.close();
    }
};