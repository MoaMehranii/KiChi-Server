package InputHandler;

import java.util.Arrays;

public class Parser {


    public static ParsedArgument parse(String a){
        String[] arguments = a.split("\\s+");
        String command = arguments[0];
        String[] args = Arrays.copyOfRange(arguments, 1, arguments.length);
        return new ParsedArgument(arguments[0] , args );
    }
}
