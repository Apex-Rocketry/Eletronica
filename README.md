# Eletrônica & Aviônica — Apex Rocketry

Repositório central do subsistema de **Eletrônica e Aviônica** da **Apex Rocketry (UFSC)**[cite: 1]. Contém projetos de hardware (PCBs e esquemáticos), firmware embarcado, sistemas de telemetria, estação de solo e documentação técnica.

---

## 📁 Estrutura do Repositório

```text
Eletronica/
├── hardware/           # Projetos de PCB, esquemáticos e bibliotecas (Altium Designer)
├── firmware/           # Códigos embarcados (C/C++, ESP-IDF, STM32 HAL/LL, FreeRTOS)
├── ground-station/     # Hardware, firmware e software de recepção e telemetria de solo
├── test-bench/         # Sistemas de aquisição de dados (DAQ) e testes estáticos
└── docs/               # Datasheets, diagramas de blocos, pinouts e manuais de integração

🚀 Projetos Ativos (Campanha 2026)
Computador de Voo (Theseus): Aquisição inercial/barométrica, navegação, registo em memória não-volátil e acionamento redundante de recuperação.

Estação de Solo (Ground Station): Link de telemetria de longo alcance (LoRa), receção em tempo real e interface de monitorização de voo.

Bancada de Testes Estáticos: Instrumentação com células de carga e condicionamento de sinal para ensaios de motores.

🛠️ Stack & Ferramentas Padrão
ECAD / PCB: Altium Designer (integração 3D via STEP/MCAD).

Firmware & Microcontroladores: C / C++ utilizando ESP-IDF, FreeRTOS e STM32Cube / HAL.

Controle de Versão: Git & GitHub.

📋 Fluxo de Trabalho (Git Workflow)
Para manter a integridade dos arquivos binários (PCBs) e do firmware, siga rigorosamente estas regras:

Nunca faça push direto na main: A branch main contém apenas versões estáveis e revisadas.

Crie uma branch para a sua tarefa:

Novas funcionalidades: feat/nome-do-modulo (ex: feat/driver-bmi088 ou feat/pcb-power-supply)

Correções: fix/descricao-do-problema (ex: fix/filtro-barometro)

Documentação: docs/assunto

Commits claros e atómicos: Evite enviar alterações de hardware e firmware no mesmo commit. Descreva o que foi alterado de forma objetiva.

Pull Request (PR): Ao finalizar, abra um Pull Request para a main e solicite a revisão da diretoria ou de outro membro do subsistema.

⚠️ Boas Práticas para Hardware (Altium)
Antes de dar git push em alterações de PCB/Esquemático, feche o projeto no Altium ou garanta que arquivos temporários (History/, __Previews/, *.log) não estão a ser rastreados pelo .gitignore.

Sempre que alterar dimensões mecânicas ou conectores externos, exporte o modelo .STEP atualizado para a pasta docs/ para validação com Aeroestruturas e Propulsão.
