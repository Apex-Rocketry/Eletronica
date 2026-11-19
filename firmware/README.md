# Firmware Embarcado — Aviônica

Códigos embarcados dos computadores de voo e módulos críticos de aviônica da Apex Rocketry.

## O que armazenar aqui
- Projetos principais de firmware (ESP-IDF, STM32 HAL/LL, FreeRTOS);
- Drivers de sensores inerciais, barométricos e memória não-volátil;
- Máquinas de estados de voo, filtros de estimação e lógica de acionamento da recuperação.

## Boas Práticas
- **Não envie arquivos de compilação** (`build/`, `.pio/`, `*.elf`, `*.bin`);
- Documente o microcontrolador alvo e a versão do framework/SDK utilizada em cada subprojeto.
