cmd_/home/hp/ELDD_EXAM/Module.symvers := sed 's/ko$$/o/' /home/hp/ELDD_EXAM/modules.order | scripts/mod/modpost -m -a   -o /home/hp/ELDD_EXAM/Module.symvers -e -i Module.symvers   -T -
