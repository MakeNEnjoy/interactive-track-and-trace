#ifndef FILEBADGEFACTORY_H
#define FILEBADGEFACTORY_H

#include "Statistic.h"
#include "Achievement.h"
#include "Badge.h"

#include <map>
#include <memory>

class FileBadgeFactory {
public:
  void addStatistic(std::string name, const std::shared_ptr<Statistic>& statistic);

  std::vector<std::pair<std::shared_ptr<Achievement>, std::shared_ptr<Badge>>> getBadges() const;

  explicit FileBadgeFactory(const std::string &datapath);

  static constexpr double badgeSize = 0.3;

private:

  std::vector<std::pair<std::shared_ptr<Achievement>, std::shared_ptr<Badge>>> getBadges(std::string badgesDirectory, std::string statisticName) const;
  std::unique_ptr<Achievement> createAchievement(std::string statistic, double requiredValue) const;
  std::unique_ptr<Badge> createBadge(std::string assetPath) const;

  std::map<std::string, std::shared_ptr<Statistic>> statistics;
  const std::string datapath;

};


#endif //FILEBADGEFACTORY_H