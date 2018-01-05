#!/usr/bin/ruby
$stdin.each_byte {|x|
    printf("0x%02x,\n",x)
    }
