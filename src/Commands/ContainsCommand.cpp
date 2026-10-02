#include "Commands/ContainsCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult ContainsCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(args.size()!=1) throw std::invalid_argument("EXISTS requires one argument: key"); return store.contains(args[0]);}}
