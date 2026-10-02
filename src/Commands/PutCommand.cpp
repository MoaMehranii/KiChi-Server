#include "Commands/PutCommand.hpp"
#include <stdexcept>
namespace kichi::commands {CommandResult PutCommand::execute(storage::Storage& store,const std::vector<std::string>& args){if(args.size()!=2) throw std::invalid_argument("PUT requires two arguments: key value"); store.put(args[0],args[1]); return std::monostate{};}}
