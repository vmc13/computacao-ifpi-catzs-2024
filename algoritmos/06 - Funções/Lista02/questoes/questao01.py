def gerar_contracheque(nome_func, mes_ref, valor_sal):
    print(f'''
        DIVINOS SOFTWARE CARIDADES
        MÊS DE REFERÊNCIA: {mes_ref}
        FUNCIONÁRIO: {nome_func}

        DEMONSTRATIVO:
        Salário: R$ {valor_sal}
        
        Total a Receber: R$ {valor_sal}
          ''')


new_contracheque = gerar_contracheque('Paulo', '01', 1000.00)
