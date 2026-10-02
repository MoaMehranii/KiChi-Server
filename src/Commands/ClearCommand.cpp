#include "Commands/ClearCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult ClearCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(!args.empty()) throw std::invalid_argument("CLEAR takes no arguments"); store.clear(); return std::monostate{};}}
