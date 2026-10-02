#include "Commands/IsEmptyCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult IsEmptyCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(!args.empty()) throw std::invalid_argument("IS_EMPTY takes no arguments"); return store.isEmpty();}}
