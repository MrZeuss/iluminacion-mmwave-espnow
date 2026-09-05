# Iluminación por presencia mmWave y ESP-NOW

## Descripción
Red distribuida de sensores de presencia alimentados por batería, nodos de luz y maestro central.

## Arquitectura / decisiones
Los sensores envían presencia y batería por ESP-NOW. Arquitectura distribuida: sensor puede avisar a luz y maestro. Incluye modo manual y vacaciones.

## Estructura
- `docs/`: descripción, mejoras y notas.
- `hardware/`: conexiones y notas de montaje.
- `images/`: diagramas generados durante el desarrollo.
- `code/`: firmware o plantillas disponibles.
- `bom/`: lista de materiales.

## Estado
Repositorio de documentación consolidado desde el hilo de diseño. Los esquemas gráficos son guías de montaje; antes de fabricar una PCB definitiva conviene verificar pinouts y datasheets de los módulos concretos.
