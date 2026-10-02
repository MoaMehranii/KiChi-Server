#include "Commands/SizeCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult SizeCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(!args.empty()) throw std::invalid_argument("MAP_SIZE takes no arguments"); return static_cast<int>(store.size());}}
