#include <iostream>
#include <string>
 
enum class operation {
    unknown = -1,
    help,
    plus,
    minus,
    volume
};
 
void print_help(const char* error) {
    if (error)
        std::cout << error << std::endl;
    std::cout <<
        "Action:\n"
        "add [a] [b]\n"
        "\tAdd two nubers ([a] and [b]) integers.\n";
}
 
operation parse_operation(const char* str) {
    if (strcmp(str, "add") == 0)
        return operation::plus;
    else if (strcmp(str, "subtract") == 0)
        return operation::minus;
    else if (strcmp(str, "volume") == 0)
        return operation::volume;
    else if (strcmp(str, "help") == 0)
        return operation::help;
    else
        return operation::unknown;
}
 
int args_count(operation op) {
    switch (op)
    {
    case operation::help: return 0;
    case operation::plus: return 2;
    case operation::minus: return 2;
    case operation::volume: return 4;
    default: return -1;
    }
}
 
bool parse_nums(const char* const args[], long double nums[], int size, bool allow_negative) {
    try {
        for (int i = 0; i < size; i++) {
            nums[i] = std::stold(args[i]);
            if (!allow_negative && nums[i] < 0)
                throw std::range_error("Negative number");
        }
        return true;
    } catch (const std::invalid_argument& e) {
        print_help("Not a number");
    } catch (const std::out_of_range& e) {
        print_help("Too big number");
    } catch (const std::range_error& e) {
        print_help(e.what());
    }
    return false;
}
 
void process(operation op, long double nums[]) {
    switch (op)
    {
    case operation::help:
        print_help(nullptr);
        break;
    case operation::plus:
        std::cout << nums[0] + nums[1] << std::endl;
        break;
    case operation::minus:
        std::cout << nums[0] - nums[1] << std::endl;
        break;
    case operation::volume:
        std::cout << nums[0] * nums[1] * nums[2] * nums[3] / 2 << std::endl;
        break;
    }
}
 
int main(int argc, char* argv[]) {
    if (argc <= 1) {
        print_help("No arguments");
        return 0;
    }
 
    operation op = parse_operation(argv[1]);
    if (op == operation::unknown) {
        print_help("Wrong operation");
        return 0;
    }
 
    int count = args_count(op);
    if (count + 2 != argc) {
        print_help("Wrong operands count");
        return 0;
    }
 
    long double* nums = new long double[count];
    if (parse_nums(argv + 2, nums, count, op != operation::volume))
        process(op, nums);
    delete[] nums;
}