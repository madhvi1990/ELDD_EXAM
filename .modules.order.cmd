cmd_/home/hp/ELDD_EXAM/modules.order := {   echo /home/hp/ELDD_EXAM/hello.ko; :; } | awk '!x[$$0]++' - > /home/hp/ELDD_EXAM/modules.order
