# Cubeset attitude control simulation

FPGA 보드를 활용한 큐브셋 위성 자세제어 시스템 시뮬레이션

## Goal
- 큐브셋 위성 회전 제어
- FPGA 보드와 시뮬레이션 환경 대응
- 돌발상황 대처 시스템 구축(예정)

## Schedule
- [x] Week 1: C언어로 일정 주기로 sensor, control 작업을 왔다갔다 하는 프로그램 구현
- [ ] Week 2-3: RTOS study
- [ ] Week 4: FPGA 보드에서 1주차에 개발한 프로그램 실행
- [ ] Week 5-6: Basilisk에서 가상 우주 공간과 위성 질량체를 만들고 질량체를 회전시켜 보기
- [ ] Week 7-9: 통신 공부, Basilisk와 FPGA 보드를 연결하여 보드가 위성 질량체를 control 할 수 있게 만들기
- [ ] Week 10-12: 돌발 상황 테스트(예정)
- [ ] Week 13: 마무리

## Progresses

### Week 1
- 프로젝트용 레포 개설 완료
- 일정 시간 단위로 sensor, control 왔다갔다 하는 프로그램 구현 완료
- 본래 ms 단위로 반복문을 순회하며 메시지를 출력하는 프로그램을 구현하려 했으나, 윈도우 내부 타이머가 **약 15 ~ 16ms씩 증가하는 현상**이 발견됨.
  그리하여 목표한 ms 단위의 task 전환에 장애가 발생하여 추후 FPGA 보드에 프로그램을 이식할 경우 이 부분에 대한 고려가 필요해보임.