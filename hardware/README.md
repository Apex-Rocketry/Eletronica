# Hardware & Projetos de PCB

Projetos eletrônicos, esquemáticos, layouts de placas de circuito impresso e bibliotecas de componentes.

## O que armazenar aqui
- Projetos de PCB e esquemáticos (Altium Designer);
- Bibliotecas esquemáticas e footprints padronizados da equipe;
- Arquivos de fabricação (Gerbers, BOM, Pick and Place) organizados em pastas de release.

## Boas Práticas
- Feche o projeto no Altium antes de realizar *commits* para evitar conflitos em arquivos binários;
- Nunca suba pastas de cache/histórico (`History/`, `__Previews/`, `Project Logs for */`);
- Ao finalizar uma revisão de placa, exporte o modelo `.STEP` atualizado para `docs/`.
